#include <iostream>
using namespace std;
#include <cmath>

int  FromBinaryToDecimal(int n){

    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 2;
    }

    return dec_value;

}
int  FromOctalToDecimal(int n){

    int num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base = base * 8;
    }

    return dec_value;

}
void DicemalTobinary(int arr[],int num){

    int i =num;
    for (int j=0;i!=0;j++){
       arr[j] = i%2;
       i = i/2;
    }

}
void DecimalTohex( char arr[],int num){

    int i =num;
    for (int j=0;i!=0;j++){
        char x= i%16;
        if(x <=9){
          arr[j] =x+'0';
        }
        else if(i%16 ==10){
            arr[j] = 'A';
        }
        else if(i%16 ==11){
            arr[j] = 'B';
        }else if(i%16 ==12){
            arr[j] = 'C';
        }else if(i%16 ==13){
            arr[j] = 'D';
        }else if(i%16 ==14){
            arr[j] = 'E';
        }else if(x ==15){
            arr[j] = 'F';
        }

        i = i/16;
    }

}
void DecimalToOctal(int arr[],int num){
    int i =num;
    for (int j=0;i!=0;j++){
        arr[j] = i%8;
        i = i/8;

    }
}
int hexadecimalToDecimal(string hexVal)
{
    int len = hexVal.size();

    // Initializing base value to 1, i.e 16^0
    int base = 1;

    int dec_val = 0;

    // Extracting characters as digits from last
    // character
    for (int i = len - 1; i >= 0; i--) {
        // if character lies in '0'-'9', converting
        // it to integral 0-9 by subtracting 48 from
        // ASCII value
        if (hexVal[i] >= '0' && hexVal[i] <= '9') {
            dec_val += (int(hexVal[i]) - 48) * base;

            // incrementing base by power
            base = base * 16;
        }

            // if character lies in 'A'-'F' , converting
            // it to integral 10 - 15 by subtracting 55
            // from ASCII value
        else if (hexVal[i] >= 'A' && hexVal[i] <= 'F') {
            dec_val += (int(hexVal[i]) - 55) * base;

            // incrementing base by power
            base = base * 16;
        }
    }
    return dec_val;
}

//    string hexNum = "1A";
//    cout << (hexadecimalToDecimal(hexNum));
void PrintArr(int arr[]){
    for (int j = 14; j >= 0; j--) {
        cout << arr[j];
    }
}
void PrintArr2(char arr[]){
    for (int j = 14; j >= 0; j--) {
        cout << arr[j];
    }
}


int main() {

    cout << "enter dec , hex , bin , oct to convert to others :"<<endl
    <<" 1 for dec    2 for bin    3 for   oct   4 for hex";
    int SwitchNum;
    cin >>SwitchNum;
    int OctalArray[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int BinaryArray[15]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char HexArr[15]={'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
    int i;
    switch (SwitchNum) {
        case 1:
              cin >> i;
                DicemalTobinary(BinaryArray,i);
                DecimalToOctal(OctalArray,i);
                DecimalTohex(HexArr,i);
                cout<< endl << "binary "<< endl;
                PrintArr(BinaryArray);
                cout<< endl << "octal "<< endl;
                PrintArr(OctalArray);
                cout<< endl << "hex "<< endl;
                PrintArr2(HexArr);

    }
    cout<<endl<< "from binary to decimal    ";
    int binary;
    cin >>binary;
    cout << FromBinaryToDecimal(binary);
    int octal;
    cin >> octal;
    cout << FromOctalToDecimal(octal);
    return 0;
}
