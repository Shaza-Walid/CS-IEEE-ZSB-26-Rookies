#include <iostream>

using namespace std;

int main(){
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    int x,y;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                x = i+1;
                y = j+1;
            }  
        }
    }

    if(x==1 && y==1) cout << "4" << endl;
    else if(x==1 && y==2) cout << "3" << endl;
    else if(x==1 && y==3) cout << "2" << endl;
    else if(x==1 && y==4) cout << "3" << endl;
    else if(x==1 && y==5) cout << "4" << endl;
    else if(x==2 && y==1) cout << "3" << endl;
    else if(x==2 && y==2) cout << "2" << endl;
    else if(x==2 && y==3) cout << "1" << endl;
    else if(x==2 && y==4) cout << "2" << endl;
    else if(x==2 && y==5) cout << "3" << endl;
    else if(x==3 && y==1) cout << "2" << endl;
    else if(x==3 && y==2) cout << "1" << endl;
    else if(x==3 && y==3) cout << "0" << endl;
    else if(x==3 && y==4) cout << "1" << endl;
    else if(x==3 && y==5) cout << "2" << endl;
    else if(x==4 && y==1) cout << "3" << endl;
    else if(x==4 && y==2) cout << "2" << endl;
    else if(x==4 && y==3) cout << "1" << endl;
    else if(x==4 && y==4) cout << "2" << endl;
    else if(x==4 && y==5) cout << "3" << endl;
    else if(x==5 && y==1) cout << "4" << endl;
    else if(x==5 && y==2) cout << "3" << endl;
    else if(x==5 && y==3) cout << "2" << endl;
    else if(x==5 && y==4) cout << "3" << endl;
    else if(x==5 && y==5) cout << "4" << endl;

    return 0;

}