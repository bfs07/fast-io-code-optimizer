#include <bits/stdc++.h>
using namespace std;

#define debug(x) cerr << #x " = " << x << endl

// read two consecutive char
char readCharacter;
bool remaining = false;

template <typename T>
bool readInt(T &x) {
  x = 0; T sig = 1;
  if(!remaining) readCharacter = getchar(), remaining = true; else remaining = false;
  while (!isdigit(readCharacter) && readCharacter != EOF) sig = (readCharacter == '-' ? -sig : sig), readCharacter = getchar();
  if(readCharacter == EOF) return remaining = false, false;
  while (isdigit(readCharacter) && readCharacter != EOF) x = x * 10 + readCharacter - '0', readCharacter = getchar();
  x *= sig;
  return true;
}

template <typename T>
bool readString(T &x) {
  x = "";
  if(!remaining) readCharacter = getchar(), remaining = true; else remaining = false;
  if(readCharacter == EOF) return remaining = false, false;
  while ((readCharacter != '\n' && readCharacter != '\t' && readCharacter != ' ' && readCharacter != EOF)) x += readCharacter, readCharacter = getchar();
  return true;
}

template <typename T>
bool readChar(T &x) {
  if(!remaining) readCharacter = getchar(), remaining = true; else remaining = false;
  if(readCharacter == EOF) return remaining = false, false;
  while ((readCharacter == '\n' || readCharacter == '\t' || readCharacter == ' ')) readCharacter = getchar();
  x = readCharacter;
  return true;
}

bool readCharArray(char*& x) {
  string y;
  if(readString(y) == false)
    return false;
  x = new char[(int)y.size() + 1];
  strcpy(x, y.c_str());
  return true;
}

template <typename T>
bool readFloat(T &x) {
  return (scanf("%f", &x) != EOF);
}

template <typename T>
bool readDouble(T &x) {
  double y;
  if(scanf("%lf", &y) == EOF) return false;
  x = y;
  return true;
}

bool readVar(bool &x) {
  int aux; bool ret = readInt(aux);
  x = (aux != 0);
  return ret;
}


bool readVar(short int &x) {
  return readInt(x);    
}

bool readVar(int &x) {
  return readInt(x);    
}

bool readVar(long int &x) {
  return readInt(x);    
}

bool readVar(long long int &x) {
  return readInt(x);    
}

bool readVar(unsigned short int &x) {
  return readInt(x);    
}

bool readVar(unsigned int &x) {
  return readInt(x);    
}

bool readVar(unsigned long &x) {
  return readInt(x);    
}

bool readVar(unsigned long long &x) {
  return readInt(x);    
}

bool readVar(char &x) {
  return readChar(x);
}

bool readVar(char *x) {
  return readCharArray(x);
}

bool readVar(string &x) {
  return readString(x);    
}

bool readVar(float &x) {
  return readFloat(x);
}

bool readVar(double &x) {
  return readDouble(x);
}

bool readVar(long double &x) {
  return readDouble(x);
}

template <typename T>
void writeInt(T &x) {
  if (x < 0) {putchar('-'); x = -x; }
  char writeBuffer[20], *writePtr = writeBuffer;
  do {
    *writePtr++ = '0' + x % 10;
    x /= 10;
  }
  while (x);
  do  { putchar(*--writePtr); }
  while (writePtr > writeBuffer);
}

void writeChar(char x) {
  putchar(x);
}

void writeString(char *x) {
  while(*x != '\0')
    putchar(*x++);
}

void writeString(string &x) {
  for(char c: x) 
    putchar(c);
}

void writeFloat(float x) {
  printf("%f", x);
}

template <typename T>
void writeDouble(T &x) {
  printf("%lf", (double)x);
}

signed main() {

  char *x;
  readCharArray(x);
  writeString(x);

}