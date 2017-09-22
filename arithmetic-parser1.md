# AlexStartProjects
using namespace std;

int main() { 
int a1,a2,res;
char sign, sign1; 
cin>>a1>>sign; 
if (sign=='>' || sign=='<') { 
  cin>>sign1; } 
cin>>a2; 
if (sign == '+') { 
  res = a1 + a2; } 
else if (sign == '-') { 
  res = a1-a2; } 
else if (sign == '') { 
  res = a1a2; }
else if (sign == '/') {
  res = a1/a2; if (a2 == 0) {
  cout<<"Error"; } 
else if (sign == '&') {
  res = a1&a2; } 
else if (sign == '|') {
  res = a1|a2; } 
else if (sign == '^') {
  res = a1^a2; }
else if (sign == '>' && sign1 == '>') {
  res = a1>>a2; }
else if (sign == '<' && sign1 == '<') {
  res = a1<<a2; } 
else { cout<<"Error"; return -1; } 
cout<<"Result: "<<res<<endl; }
