template <typename T> bool readInt(T &x); template <typename T> bool readString(T &x);
template <typename T> bool readChar(T &x); bool readCharArray(char*& x);
template <typename T> bool readFloat(T &x); template <typename T> bool readDouble(T &x);
bool readVar(bool &x); bool readVar(short int &x); bool readVar(int &x);
bool readVar(long int &x); bool readVar(long long int &x); bool readVar(unsigned short int &x);
bool readVar(unsigned int &x); bool readVar(unsigned long &x); bool readVar(unsigned long long &x);
bool readVar(std::string &x); bool readVar(char &x); bool readVar(char*& x); bool readVar(float &x);
bool readVar(double &x); bool readVar(long double &x); template <typename T> void writeInt(T x);
void writeString(std::string x); void writeChar(char x); void writeCharArray(const char *x);
void writeFloat(float x); template <typename T> void writeDouble(T x); void writeVar(bool x);
void writeVar(short int x); void writeVar(int x); void writeVar(long int x); void writeVar(long long int x);
void writeVar(unsigned short int x); void writeVar(unsigned int x); void writeVar(unsigned long x);
void writeVar(unsigned long long x); void writeVar(char x); void writeVar(const char *x); 
void writeVar(std::string x); void writeVar(float x); void writeVar(double x); void writeVar(long double x);