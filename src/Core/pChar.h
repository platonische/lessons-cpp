#ifndef PCHAR_H
#define PCHAR_H


class pChar
{
private:

public:
    char* _pChar;
    pChar(){
        _pChar="sda";
    };
    void set(const char* text){
        int Size = 0;
        while (text[Size++] != '\0');
        _pChar = new char[Size];
        for(int i = 0; _pChar[i] = text[i]; i++);
    }
    char* get(){
        return _pChar;
    }
    void clear(){
        _pChar = new char [0];
    }
};

#endif // PCHAR_H
