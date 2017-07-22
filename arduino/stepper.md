## 스텝 모터 제어 관련 자료
* [링크](http://blog.naver.com/roboholic84/220851897579)
* 사용하는 모터에 대한 링크
    - 모터: http://mechasolution.com/shop/goods/goods_view.php?goodsno=427&category=131005
    - 모터 콘드롤러: http://mechasolution.com/shop/goods/goods_view.php?goodsno=9264&category=131014
* 스텝모터 여러개 동작
    - https://www.youtube.com/watch?v=nFjE_jT38jQ
## 스텝모터가 동작하도록 하자     
* 사용하는 모터의 wireing
    - A (RED), C (GRN), B (YUL), D(BLU)   
* 다음 링크에서 따움
    - 
```
#include <Stepper.h>
 
//const int stepsPerRevolution = 200; //360도
const int stepsPerRevolution = 200; //360도

Stepper myStepper(stepsPerRevolution,11,9,10,8);
 
void setup() {
  myStepper.setSpeed(30); //분당 RPM인데 높게 하면 잘 안됨 30 이하에서나 잘 동작하는 것 같다.
}
void loop() {
  myStepper.step(stepsPerRevolution/1);
  myStepper.step(-stepsPerRevolution/1);
}
```
* `stepper.h` https://www.arduino.cc/en/Reference/StepperSetSpeed