int input1 = 0;
int input2 = 0;
int input3 = 0;
int input4 = 0;
int enable12 = 0;
int enable34 = 0;

// These are var decalrations
class hbridge{
    void start(int in1, int in2, int in3, int in4, int en12, int en34){
        int input1 = in1;
        int input2 = in2;
        int input3 = in3;
        int input4 = in4;
        int enable12 = en12;
        int enable34 = en34;
        pinMode(input1, OUTPUT);
        pinMode(input2, OUTPUT);
        pinMode(input3, OUTPUT);
        pinMode(input4, OUTPUT);
        pinMode(enable12, OUTPUT);
        pinMode(enable34, OUTPUT);
        // this is for the start of the code, mkaing the pinModes and defining inputs and enable
    }
    void move(int in1, int in2, int in3, int in4, int en12, int en34, int time){
        analogWrite(enable12, en12);
        analogWrite(enable34, en34);
        digitalWrite(input1, in1);
        digitalWrite(input2, in2);
        digitalWrite(input3, in3);
        digitalWrite(input4, in4);
        delay(time);
        // basic moving line
    }
    void stop(){
        move(0,0,0,0,0,0,10);
    }
    void forward(int time, int speed){
        move(1,0,0,1,speed,speed,time);
        stop();
    }
    void backward(int time, int speed){
        move(0,1,1,0,speed,speed,time);
        stop();
    }
    void turn(char dir, int time, int speed){
        if (dir == 'L'){
            move(0,1,0,1,speed, speed, time);
        }
        else if (dir == 'R'){
            move(0,1,0,1,speed, speed, time);
        }else{
            stop();
        }
        stop();
    }




};
