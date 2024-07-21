// CodSoft Task 1!!!
# include<iostream>
# include<cstdlib>
# include<ctime>
using namespace std;
int main(){
    const int perfectNumber = 73;
    srand(time(0));
    int randomNumber = rand()%100+1;
    int guess;
    int attempts =0;
    cout<< "Hii Welcome To The Number Guessing Game"<<endl;
    cout<<"Think Of A Number Between 1 to 100"<<endl;
    do{
        cout<<"Plz Enter Your Guess";
        cin>>guess;
        attempts ++;
        if(guess>randomNumber){
            cout<<"The Number Which You Have Guess Is Too High. PLZ Try Again"<<endl;
            
        }
         else if (guess < randomNumber){
                cout<<"The Number Which You Have Guess Is Too Low. PLZ Try Again"<<endl;

            }
         else{
                cout<<" Congratulations.The Number Which You Have Guessed is Right"<<endl;
                break;
            }
        if (guess == perfectNumber){
            cout<<"Congratulations.You Have Guessed A Right Number "<<endl;
        }
        else {
            cout<<"Keep Guessing  TO Find The Perfect Number The Perfect Number"<<endl;
        }

        
 
    }
    while(guess != randomNumber || guess != perfectNumber);
    cout<<"Attempts made :"<< attempts <<endl;

       return 0;
}


