#include<iostream>
using namespace std;

class job{

    public:
       double salary;
       double hrs;

    job (int sal, int hours){

        salary = sal;
        hrs = hours;
    }   
};
void sort_arr(job arr[], int n){

    job temp(0,0);
    for(int i = 0; i<n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if (arr[j].salary/arr[j].hrs < arr[j+1].salary/arr[j+1].hrs){ 
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp; 
            }
        }
    }
}
int main(){

    job arr[]={{1000,5},{500,10},{600,15}};
    float t_hrs;
    int i; 

    sort_arr(arr,3);

    cout << "Enter total hours" << endl;
    cin >> t_hrs;

    double max_salary = 0;
    float current_hrs = 0;

    for(i = 0;i<3;i++){
        if(current_hrs + arr[i].hrs <= t_hrs){
            current_hrs = current_hrs + arr[i].hrs;
            max_salary = max_salary + arr[i].salary;
        }
        else{
		    float hrs_left = t_hrs - current_hrs;
            max_salary = max_salary + (arr[i].salary * double(hrs_left)/double(arr[i].hrs));
            break;
        }
    }

    cout << "Maximum salary is : " << max_salary << endl;

}