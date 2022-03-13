#include <iostream>

using namespace std;

int main() {

    int table[256] = {
        // 0     1     2     3     4     5     6     7     8     9     A     B     C     D     E     F         
        0x63, 0x7c, 0x77, 0x7b, 0xf2, 0x6b, 0x6f, 0xc5, 0x30, 0x01, 0x67, 0x2b, 0xfe, 0xd7, 0xab, 0x76,  //0
        0xca, 0x82, 0xc9, 0x7d, 0xfa, 0x59, 0x47, 0xf0, 0xad, 0xd4, 0xa2, 0xaf, 0x9c, 0xa4, 0x72, 0xc0,  //1
        0xb7, 0xfd, 0x93, 0x26, 0x36, 0x3f, 0xf7, 0xcc, 0x34, 0xa5, 0xe5, 0xf1, 0x71, 0xd8, 0x31, 0x15,  //2
        0x04, 0xc7, 0x23, 0xc3, 0x18, 0x96, 0x05, 0x9a, 0x07, 0x12, 0x80, 0xe2, 0xeb, 0x27, 0xb2, 0x75,  //3
        0x09, 0x83, 0x2c, 0x1a, 0x1b, 0x6e, 0x5a, 0xa0, 0x52, 0x3b, 0xd6, 0xb3, 0x29, 0xe3, 0x2f, 0x84,  //4
        0x53, 0xd1, 0x00, 0xed, 0x20, 0xfc, 0xb1, 0x5b, 0x6a, 0xcb, 0xbe, 0x39, 0x4a, 0x4c, 0x58, 0xcf,  //5
        0xd0, 0xef, 0xaa, 0xfb, 0x43, 0x4d, 0x33, 0x85, 0x45, 0xf9, 0x02, 0x7f, 0x50, 0x3c, 0x9f, 0xa8,  //6
        0x51, 0xa3, 0x40, 0x8f, 0x92, 0x9d, 0x38, 0xf5, 0xbc, 0xb6, 0xda, 0x21, 0x10, 0xff, 0xf3, 0xd2,  //7
        0xcd, 0x0c, 0x13, 0xec, 0x5f, 0x97, 0x44, 0x17, 0xc4, 0xa7, 0x7e, 0x3d, 0x64, 0x5d, 0x19, 0x73,  //8
        0x60, 0x81, 0x4f, 0xdc, 0x22, 0x2a, 0x90, 0x88, 0x46, 0xee, 0xb8, 0x14, 0xde, 0x5e, 0x0b, 0xdb,  //9
        0xe0, 0x32, 0x3a, 0x0a, 0x49, 0x06, 0x24, 0x5c, 0xc2, 0xd3, 0xac, 0x62, 0x91, 0x95, 0xe4, 0x79,  //A
        0xe7, 0xc8, 0x37, 0x6d, 0x8d, 0xd5, 0x4e, 0xa9, 0x6c, 0x56, 0xf4, 0xea, 0x65, 0x7a, 0xae, 0x08,  //B
        0xba, 0x78, 0x25, 0x2e, 0x1c, 0xa6, 0xb4, 0xc6, 0xe8, 0xdd, 0x74, 0x1f, 0x4b, 0xbd, 0x8b, 0x8a,  //C
        0x70, 0x3e, 0xb5, 0x66, 0x48, 0x03, 0xf6, 0x0e, 0x61, 0x35, 0x57, 0xb9, 0x86, 0xc1, 0x1d, 0x9e,  //D
        0xe1, 0xf8, 0x98, 0x11, 0x69, 0xd9, 0x8e, 0x94, 0x9b, 0x1e, 0x87, 0xe9, 0xce, 0x55, 0x28, 0xdf,  //E
        0x8c, 0xa1, 0x89, 0x0d, 0xbf, 0xe6, 0x42, 0x68, 0x41, 0x99, 0x2d, 0x0f, 0xb0, 0x54, 0xbb, 0x16}; //F
    cout << "----------------------------" << endl;
    cout << "Welcome to AES-128 Algorithm" << endl << "----------------------------" << endl;


    int keyArr[4][4];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            keyArr[i][j] = rand() % 0xFF;
        }
    }


    int stateArr[4][4];
    for (int i = 0; i < 4; i++ ) {
        for (int j = 0; j < 4;j++) {
            stateArr[i][j] = rand() % 0xFF;
        }
    }

    /*--------------------------------------------------------*/

    cout << "         Key" << endl << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {   
            printf(" %x ", keyArr[j][i]);
        }
        cout << endl;
    }
    cout << endl << endl;
    
    
    
    cout << "        State" << endl << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %x ", stateArr[j][i]);
        }
        cout << endl;
    }
    cout << endl << endl;
    /*--------------------------------------------------------*/




    int RotArr[4];
    RotArr[0] = keyArr[3][1];
    RotArr[1] = keyArr[3][2];  //rotword
    RotArr[2] = keyArr[3][3];
    RotArr[3] = keyArr[3][0];



    /*--------------------------------------------------------*/
    cout << "----------------------------" << endl << endl;
    cout << "    RotWord" << endl << endl;
    for (int i = 0; i < 4; i++)
    {
        
        printf("        %x \n", RotArr[i]);
        
    }
    cout << endl << endl;
    /*--------------------------------------------------------*/



    RotArr[0] = table[RotArr[0]];
    RotArr[1] = table[RotArr[1]];
    RotArr[2] = table[RotArr[2]];  //substitute table
    RotArr[3] = table[RotArr[3]];
    

    
    RotArr[0] = RotArr[0] ^ 0x01;
    RotArr[1] = RotArr[1] ^ 0x00;  //xor with 1-0-0-0
    RotArr[2] = RotArr[2] ^ 0x00;
    RotArr[3] = RotArr[3] ^ 0x00;
    
    /*--------------------------------------------------------*/

    cout << "----------------------------" << endl << endl;
    /*--------------------------------------------------------*/

    
    
    int keyArrTwo[4][4]; //for w4-7
    /*w4*/keyArrTwo[0][0] = RotArr[0]/*rot*/ ^ keyArr[0][0];/*w0*/
    /*w4*/keyArrTwo[0][1] = RotArr[1]/*rot*/ ^ keyArr[0][1];/*w0*/
    /*w4*/keyArrTwo[0][2] = RotArr[2]/*rot*/ ^ keyArr[0][2];/*w0*/
    /*w4*/keyArrTwo[0][3] = RotArr[3]/*rot*/ ^ keyArr[0][3];/*w0*/
         
    /*w5*/keyArrTwo[1][0] = keyArr[1][0]/*w1*/ ^ keyArrTwo[0][0];/*w4*/
    /*w5*/keyArrTwo[1][1] = keyArr[1][1]/*w1*/ ^ keyArrTwo[0][1];/*w4*/
    /*w5*/keyArrTwo[1][2] = keyArr[1][2]/*w1*/ ^ keyArrTwo[0][2];/*w4*/
    /*w5*/keyArrTwo[1][3] = keyArr[1][3]/*w1*/ ^ keyArrTwo[0][3];/*w4*/

    /*w6*/keyArrTwo[2][0] = keyArr[2][0]/*w2*/ ^ keyArrTwo[1][0];/*w5*/
    /*w6*/keyArrTwo[2][1] = keyArr[2][1]/*w2*/ ^ keyArrTwo[1][1];/*w5*/
    /*w6*/keyArrTwo[2][2] = keyArr[2][2]/*w2*/ ^ keyArrTwo[1][2];/*w5*/
    /*w6*/keyArrTwo[2][3] = keyArr[2][3]/*w2*/ ^ keyArrTwo[1][3];/*w5*/

    /*w7*/keyArrTwo[3][0] = keyArr[3][0]/*w3*/ ^ keyArrTwo[2][0];/*w6*/
    /*w7*/keyArrTwo[3][1] = keyArr[3][1]/*w3*/ ^ keyArrTwo[2][1];/*w6*/
    /*w7*/keyArrTwo[3][2] = keyArr[3][2]/*w3*/ ^ keyArrTwo[2][2];/*w6*/
    /*w7*/keyArrTwo[3][3] = keyArr[3][3]/*w3*/ ^ keyArrTwo[2][3];/*w6*/


    cout << "     w4 to w7" << endl << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            printf(" %x ", keyArrTwo[j][i]);

        }
        cout << endl;
    }
    cout << endl << endl;

    cout << "----------------------------" << endl << endl;



    /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    /* - - - - - - - - - - - - - - - -  SECOND PHASE - - - - - - - - - - - - - - - - - - - - - - -*/
    /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/



    // state ^ key
    int newState[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)  
        {
            newState[i][j] = keyArr[i][j] ^ stateArr[i][j];
        }
    }

    // new state substitute bytes
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            newState[i][j] = table[newState[i][j]];
        }
    }

    /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/

    //aes shift rows
    int shiftedNewState[4][4];
    shiftedNewState[0][0] = newState[0][0];    //no change in first row
    shiftedNewState[0][1] = newState[0][1];
    shiftedNewState[0][2] = newState[0][2];
    shiftedNewState[0][3] = newState[0][3];

    shiftedNewState[1][0] = newState[1][1];
    shiftedNewState[1][1] = newState[1][2];    //second row => 1 left
    shiftedNewState[1][2] = newState[1][3];
    shiftedNewState[1][3] = newState[1][0];

    shiftedNewState[2][0] = newState[2][2];
    shiftedNewState[2][1] = newState[2][3];    //third row  => 2 left
    shiftedNewState[2][2] = newState[2][0];
    shiftedNewState[2][3] = newState[2][1];

    shiftedNewState[3][0] = newState[2][3];
    shiftedNewState[3][1] = newState[2][0];    //fourth row  => 3 left (or 1 right)
    shiftedNewState[3][2] = newState[2][1];
    shiftedNewState[3][3] = newState[2][2];

    /* - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -*/
    //aes mix columns

    int specialMatrix[4][4];
    specialMatrix[0][0] = 0x02;  specialMatrix[1][0] = 0x03;  specialMatrix[2][0] = 0x01;  specialMatrix[3][0] = 0x01;
    specialMatrix[0][1] = 0x01;  specialMatrix[1][1] = 0x02;  specialMatrix[2][1] = 0x03;  specialMatrix[3][1] = 0x01;
    specialMatrix[0][2] = 0x01;  specialMatrix[1][2] = 0x01;  specialMatrix[2][2] = 0x02;  specialMatrix[3][2] = 0x03;
    specialMatrix[0][3] = 0x03;  specialMatrix[1][3] = 0x01;  specialMatrix[2][3] = 0x01;  specialMatrix[3][3] = 0x02;


    /*for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << specialMatrix[i][j] << endl;
        }
        cout << endl;
    }*/
    int tempForXoR[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tempForXoR[i][j] = shiftedNewState[0][j] * specialMatrix[i][j];
            tempForXoR[i][j] &= 0x00FF; //remove bits after 8 bits
        }
    }
    //temp[0][0] ^ temp[0][1] ^ temp[0][2] ^ temp[0][3]
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            shiftedNewState[0][j] = tempForXoR[i][0] ^ tempForXoR[i][1] ^ tempForXoR[i][2] ^ tempForXoR[i][3];
            shiftedNewState[1][j] = tempForXoR[i][0] ^ tempForXoR[i][1] ^ tempForXoR[i][2] ^ tempForXoR[i][3];
            shiftedNewState[2][j] = tempForXoR[i][0] ^ tempForXoR[i][1] ^ tempForXoR[i][2] ^ tempForXoR[i][3];
            shiftedNewState[3][j] = tempForXoR[i][0] ^ tempForXoR[i][1] ^ tempForXoR[i][2] ^ tempForXoR[i][3];
        }     
    }

    //we mixed columns. next step is multiplying this state with key w4 to w7. and we get new state.


    int lastNewState[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            lastNewState[i][j] = shiftedNewState[i][j] ^ keyArrTwo[i][j];
        }
    }


    cout << "      Final Array" << endl << endl;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           

            printf("  %x ", lastNewState[j][i]);

        }
        cout << endl;
    }



}