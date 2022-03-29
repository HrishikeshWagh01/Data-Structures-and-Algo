#include<iostream>
using namespace std;

class job{

    public:
       int salary;
       int hrs;

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
int salary(job arr[], int n){

    int t_hrs;
    int max_salary = 0;
    int current_hrs = 0;

    cout << "Enter total hours" << endl;
    cin >> t_hrs;

    for(int i = 0;i<3;i++){
        if(current_hrs + arr[i].hrs <= t_hrs){
            current_hrs = current_hrs + arr[i].hrs;
            max_salary = max_salary + arr[i].salary;
        }
        else{
		    int hrs_left = t_hrs - current_hrs;
            max_salary = max_salary + (arr[i].salary * (hrs_left)/(arr[i].hrs));
            break;
        }
    }
    return max_salary;
    
}
int main(){

    job arr[]={{1000,5},{500,4},{2000,2}};

    sort_arr(arr,3);

    int res = salary(arr,3);
    cout << "Maximum salary is : " << res << endl;

}