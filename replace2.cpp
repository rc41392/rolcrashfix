#include <iostream>
#include <fstream>
#include <string>
using namespace std;

char get_val(char x) {
    if(x=='0') return (char)0;
    if(x=='1') return (char)1;
    if(x=='2') return (char)2;
    if(x=='3') return (char)3;
    if(x=='4') return (char)4;
    if(x=='5') return (char)5;
    if(x=='6') return (char)6;
    if(x=='7') return (char)7;
    if(x=='8') return (char)8;
    if(x=='9') return (char)9;
    if(x=='A') return (char)10;
    if(x=='B') return (char)11;
    if(x=='C') return (char)12;
    if(x=='D') return (char)13;
    if(x=='E') return (char)14;
    if(x=='F') return (char)15;
    return (char)0;
}

char parse_byte(string s) {
    char ch_10 = get_val(s[0]);
    char ch_1 = get_val(s[1]);
    char ch = (ch_10 << 4) | (ch_1);
    return ch;
}

int parse_addr(string s) {
    int b_1000000 = (int)(unsigned char)parse_byte(s.substr(0,2));
    int b_10000 = (int)(unsigned char)parse_byte(s.substr(2,2));
    int b_100 = (int)(unsigned char)parse_byte(s.substr(4,2));
    int b_1 = (int)(unsigned char)parse_byte(s.substr(6,2));
    return (b_1000000 << 24) | (b_10000 << 16) | (b_100 << 8) | (b_1);
}

int main() {
    ifstream ifs("legendsfix4.exe.bin", ios::in | ios::out | ios::binary);
    ifstream ifs2("fix_diff.txt");
    ofstream ofs("legendsfix4.exe.bin2", ios::out|ios::binary);
    ofstream ofs2("log.txt", ios::out);
    char x, x0;
    string line;
    int addr_num = 0, count = 0;
    while(std::getline(ifs2, line)) {
        addr_num = parse_addr(line);
        //ifs.seekg(line_num, ios_base::beg);
        while(addr_num > count) {
            count ++;
            ifs.read(&x0, sizeof( char ) );
            ofs.write(&x0,  sizeof( char ) );
        }
        ifs.read(&x0, sizeof( char ) );
        x = parse_byte(line.substr(10, 2));

        if(x==x0) {
            for(int i = 13; i < line.length(); i += 2) {
                x = parse_byte(line.substr(i, 2));
                //increase input file position
                if(i != 13)
                    ifs.read(&x0, sizeof( char ) );
                ofs.write(&x,  sizeof( char ) );
                count ++;
            }
            ofs2 << "Write successfully at address " << std::hex << addr_num << "." << std::endl;
        } else {
            ofs2 << "Write failed at address " << std::hex << addr_num << ", original byte {" << 
                (int)(unsigned char)x0 << ", " << (int)(unsigned char)x << "} does not match." << std::endl;
            ifs.close();
            ofs.close();
            ifs2.close();
            ofs2.close();
            return 1;
        }
    }

    while(1) {
        ifs.read(&x0, sizeof( char ) );
        if(ifs.eof()) break;
        ofs.write(&x0,  sizeof( char ) );
    }

    ifs.close();
    ofs.close();
    ifs2.close();
    ofs2.close();

    return 0;
}