float areaa(float x1,float y1,float x2,float y2,float x3,float y3){
return abs(((x1*(y2-y3))+((x2*(y3-y1)))+((x3*(y1-y2))))/2.0);
}
int main() {
    float ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
  float area=areaa(ax,ay,bx,by,cx,cy);
    if(area==0){
      cout<<"These points doesn't form a triangle"<<endl;
      return 0;
    }
  float px,py;
  cin>>px>>py;
   float area1=areaa(ax,ay,bx,by,px,py);
   float area2=areaa(ax,ay,px,py,cx,cy);
   float area3=areaa(px,py,bx,by,cx,cy);
  if(area==(area1+area2+area3)){
    cout<<"its insdie the triangle"<<endl;
    return 0;
  }
  cout<<"its not insde the trinagle"<<endl;
  return 0;
  
}
