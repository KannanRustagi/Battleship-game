#include <bits/stdc++.h>

using namespace std;

void show(char arr[10][10]){
    cout<<" ";
    for(int i=0; i<10; i++){
        cout<<char('A'+i)<<" ";
    }
    cout<<endl;

    for(int i=0; i<10; i++){
        cout<<i+1<<" ";
        for(int j=0; j<10; j++){
           cout<<arr[i][j]<<" ";
        }

        cout<<endl;
    }
}

void clear(char arr[10][10]){
    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            arr[i][j]='.';
        }
    }
}

void aircraft(char arr[10][10],char x, int y, char o){
    int start_c=x-'A';
    int start_r=y-1;
    
    if(o=='v'){
        if(start_r>5){
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
        else{
        int x=1;
        for(int i=start_r; i<start_r+5; i++){
            if(arr[i][start_c]!='.'){
                x=0;
                break;
            }
        }

        if(x==1){
            for(int i=start_r; i<start_r+5; i++){
                arr[i][start_c]='A';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
        }
    }

    if(o=='h'){
        if(start_c>5)
        {
             cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
        else{
        int y=1;
        for(int i=start_c; i<start_c+5; i++){
            if(arr[start_r][i]!='.'){
                y=0;
                break;
            }
        }

        if(y==1){
            for(int i=start_c; i<start_c+5; i++){
                arr[start_r][i]='A';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
    }
    }
}
void battleship(char arr[10][10],char x, int y, char o){
    int start_c=x-'A';
    int start_r=y-1;
    
    if(o=='v'){
        if(start_r>6){
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
        else{
        int x=1;
        for(int i=start_r; i<start_r+4; i++){
            if(arr[i][start_c]!='.'){
                x=0;
                break;
            }
        }

        if(x==1){
            for(int i=start_r; i<start_r+4; i++){
                arr[i][start_c]='B';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
        }
    }

    if(o=='h'){

        if(start_c>6)
        {
             cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }

        else{
        int y=1;
        for(int i=start_c; i<start_c+4; i++){
            if(arr[start_r][i]!='.'){
                y=0;
                break;
            }
        }

        if(y==1){
            for(int i=start_c; i<start_c+4; i++){
                arr[start_r][i]='B';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
    }
    }
}
void destroyer(char arr[10][10],char x, int y, char o){
    int start_c=x-'A';
    int start_r=y-1;
    
    if(o=='v'){
        if(start_r>7){
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
        else{
        int x=1;
        for(int i=start_r; i<start_r+3; i++){
            if(arr[i][start_c]!='.'){
                x=0;
                break;
            }
        }

        if(x==1){
            for(int i=start_r; i<start_r+3; i++){
                arr[i][start_c]='D';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
        }
    }

    if(o=='h'){
        if(start_c>7)
        {
             cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
        else{
        int y=1;
        for(int i=start_c; i<start_c+3; i++){
            if(arr[start_r][i]!='.'){
                y=0;
                break;
            }
        }

        if(y==1){
            for(int i=start_c; i<start_c+3; i++){
                arr[start_r][i]='D';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
    }
    }
}

void corvette(char arr[10][10],char x, int y, char o){
    int start_c=x-'A';
    int start_r=y-1;
    
    if(o=='v'){
        int x=1;
        for(int i=start_r; i<start_r+2; i++){
            if(arr[i][start_c]!='.'){
                x=0;
                break;
            }
        }

        if(x==1){
            for(int i=start_r; i<start_r+2; i++){
                arr[i][start_c]='C';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
    }

    if(o=='h'){
        int y=1;
        for(int i=start_c; i<start_c+2; i++){
            if(arr[start_r][i]!='.'){
                y=0;
                break;
            }
        }

        if(y==1){
            for(int i=start_c; i<start_c+2; i++){
                arr[start_r][i]='C';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
    }
}

void frigate(char arr[10][10],char x, int y, char o){
    int start_c=x-'A';
    int start_r=y-1;
    
    if(o=='v'){
        int x=1;
        for(int i=start_r; i<start_r+1; i++){
            if(arr[i][start_c]!='.'){
                x=0;
                break;
            }
        }

        if(x==1){
            for(int i=start_r; i<start_r+1; i++){
                arr[i][start_c]='F';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
    }

    if(o=='h'){
        int y=1;
        for(int i=start_c; i<start_c+1; i++){
            if(arr[start_r][i]!='.'){
                y=0;
                break;
            }
        }

        if(y==1){
            for(int i=start_c; i<start_c+1; i++){
                arr[start_r][i]='F';
            }
        }
        else{
            cout<<"Cannot set ship here, invalid position, try again"<<endl;
        }
    }
}

char hit( char arr1[10][10], char arr2[10][10], char x, int y){
    int c=x-'A';
    int r=y-1;

    char t;

    if(arr1[r][c]=='.'){
        arr1[r][c]='*';
        arr2[r][c]= '*';
        t='.';
        cout<<"You missed! Better luck next time"<<endl;
    }
    else{
        t= arr1[r][c];
        arr1[r][c]='H';
        arr2[r][c]='H';
        cout<<"You hit the right mark!"<<endl;

    }
    return t;
}

int main(){
    //input for column ranges from A, B,... to J
    //input for row ranges from 1, 2...to 10
    char player1[10][10];
    char grid1[10][10];
    clear(player1);
    clear(grid1);

    char player2[10][10];
    char grid2[10][10];
    clear(player2);
    clear(grid2);

    cout<<"Planning phase for player 1"<<endl;
    int a1=0;
    int b1=0;
    int c1=0;
    int d1=0;
    int f1=0;

    while(a1==0 || b1==0 || c1==0 || d1==0 || f1==0){
        char s;
        cout<<"Enter A if you want to set the aircraft ship"<<endl;
        cout<<"Enter B if you want to set the battleship ship"<<endl;
        cout<<"Enter D if you want to set the destroyer ship"<<endl;
        cout<<"Enter C if you want to set the corvette ship"<<endl;
        cout<<"Enter F if you want to set the frigate ship"<<endl;

        cout<<"Kind of ship you want to set: ";
        cin>>s;

        char o;
        cout<<"Enter h for horizontal orientation:"<<endl;
        cout<<"Enter v for vertical orientation: "<<endl;
        cout<<"Enter the orientation: "<<endl;
        cin>>o;

        char x;
        cout<<"Enter column: "<<endl;
        cin>>x;

         int y;
        cout<<"Enter row: "<<endl;
        cin>>y;

        if(s=='A'){
            a1++;
            aircraft(player1, x, y, o );
        }

        if(s=='B'){
            b1++;
            battleship(player1, x, y, o );
        }

        if(s=='C'){
            c1++;
            corvette(player1, x, y, o );
        }
        if(s=='D'){
            d1++;
            destroyer(player1, x, y, o );
        }
        if(s=='F'){
            f1++;
            frigate(player1, x, y, o );
        }
        cout<<"Your grid after the cuurent setting is: "<<endl;
        show(player1);
        cout<<endl;
    }

    cout<<"Your ships are all ready, player1: "<<endl;
    show(player1);
    cout<<endl;

    cout<<"Planning phase for player 2"<<endl;
    int a2=0;
    int b2=0;
    int c2=0;
    int d2=0;
    int f2=0;

    while(a2==0 || b2==0 || c2==0 || d2==0 || f2==0){
        char s;
        cout<<"Enter A if you want to set the aircraft ship"<<endl;
        cout<<"Enter B if you want to set the battleship ship"<<endl;
        cout<<"Enter D if you want to set the destroyer ship"<<endl;
        cout<<"Enter C if you want to set the corvette ship"<<endl;
        cout<<"Enter F if you want to set the frigate ship"<<endl;

        cout<<"Kind of ship you want to set: ";
        cin>>s;

        char o;
        cout<<"Enter h for horizontal orientation:"<<endl;
        cout<<"Enter v for vertical orientation: "<<endl;
        cout<<"Enter the orientation: "<<endl;
        cin>>o;

        char x;
        cout<<"Enter column: "<<endl;
        cin>>x;

         int y;
        cout<<"Enter row: "<<endl;
        cin>>y;

        if(s=='A'){
            a2++;
            aircraft(player2, x, y, o );
        }

        if(s=='B'){
            b2++;
            battleship(player2, x, y, o );
        }

        if(s=='C'){
            c2++;
            corvette(player2, x, y, o );
        }
        if(s=='D'){
            d2++;
            destroyer(player2, x, y, o );
        }
        if(s=='F'){
            f2++;
            frigate(player2, x, y, o );
        }
    }

    cout<<"Your ships are all ready, player2: "<<endl;
    show(player2);
    cout<<endl;

    int aircraft1=5;
    int battleship1=4;
    int destroyer1=3;
    int corvette1=2;
    int frigate1=1;

    int aircraft2=5;
    int battleship2=4;
    int destroyer2=3;
    int corvette2=2;
    int frigate2=1;

    int k1=1;
    int k2=1;

    while(k1 && k2){
        cout<<"Guessing phase for player 1"<<endl;
        cout<<endl;

        cout<<"Grid for player 1 along with positions for which player 2 has guessed: "<<endl;
        show(player1);
        cout<<endl;

        cout<<" Grid for player 2 along with the positions for which you have guessed: "<<endl;
        show(grid2);
        cout<<endl;

        char x;
        cout<<"Enter column which you wanna hit: "<<endl;
        cin>>x;

        int y;
        cout<<"Enter row which you wanna hit: "<<endl;
        cin>>y;

        char t=hit(player2, grid2, x, y);
        if(t=='A'){
            aircraft2--;
            if(aircraft2==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }
        else if(t=='B'){
            battleship2--;
            if(battleship2==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }
        else if(t=='D'){
            destroyer2--;
            if(destroyer2==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }
        else if(t=='C'){
            corvette2--;
            if(corvette2==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }
        else if(t=='F'){
            frigate2--;
            if(frigate2==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }

        if(aircraft2==0 && battleship2==0 && corvette2==0 && destroyer2==0 && frigate2==0){
            k2=0;
            cout<<"Player 1 won!"<<endl;
            cout<<endl;
        }


        cout<<"Guessing phase for player 2"<<endl;
        cout<<endl;

        cout<<"Grid for player 2 along with positions for which player 1 has guessed: "<<endl;
        show(player2);
        cout<<endl;

        cout<<" Grid for player 1 along with the positions for which you have guessed: "<<endl;
        show(grid1);
        cout<<endl;

        char x1;
        cout<<"Enter column which you wanna hit: "<<endl;
        cin>>x1;

        int y1;
        cout<<"Enter row which you wanna hit: "<<endl;
        cin>>y1;

        char t1=hit(player1, grid1, x1, y1);
        if(t1=='A'){
            aircraft1--;
            if(aircraft1==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }
        else if(t1=='B'){
            battleship1--;
            if(battleship1==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }
        else if(t1=='D'){
            destroyer1--;
            if(destroyer1==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }
        else if(t1=='C'){
            corvette1--;
            if(corvette1==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }
        else if(t1=='F'){
            frigate1--;
            if(frigate1==0){
                cout<<"Hit and sunk!"<<endl;
            }
        }

        if(aircraft1==0 && battleship1==0 && corvette1==0 && destroyer1==0 && frigate1==0){
            k2=0;
            cout<<"Player 1 won!"<<endl;
            cout<<endl;
        }

}
}