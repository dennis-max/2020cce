//要開啟 Processing (1) Win鍵, Proces...出現
//(2) 在下載,解壓縮,資料夾 (不可以開(拉鏈)壓縮檔)
//(3) 自己的目錄, 建立捷徑(exe不能移, 捷徑才能移)
void setup(){//設定,只做一次
  size(400,200);
}
void draw(){//畫,每秒60次
  background(57,255,127);//RGB三色
  fill(255);//白
  ellipse(100,100, 180,180);
  fill(255,0,0);//紅
  float stop=mouseX/50.0;
  text(stop, 200,100);
  arc( 100,100, 180,180, 0, stop);
}//  畫圓   圓心   寬  高
