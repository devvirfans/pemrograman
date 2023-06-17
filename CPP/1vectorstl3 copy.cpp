#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;


class Vector {
    vector<int> v;
    double mean, meanAfter;
    int size;
    int sizeAfter;

    public:
        Vector(){
            mean = -9.99;
            meanAfter = -9.99;
            size = 0;
            sizeAfter = 0;
        }

        void addData(int num){
            v.push_back(num);
        }

        void removeData(int index, int hasremove){
            v.erase(v.begin() + index - hasremove - 1 );
        }    

        void printData() {
            for(int i=0; i<v.size(); i++) {
                cout << v[i] << endl;
            }
        }

         void meanfunction() {
            if(!v.size()){
                mean = -9.99;
            } else {
                double sum = 0;
                for(int i = 0; i< v.size(); i++){
                    sum += v[i];
                }
                mean = (double) sum/v.size();
                size = v.size();
            }
        }

        void meanfunctionAfter() {
            if(!v.size()){
                meanAfter = -9.99;
            } else {
                double sum = 0;
                for(int i = 0; i< v.size(); i++){
                    sum += v[i];
                }
                meanAfter = (double) sum/v.size();
                sizeAfter = v.size();
            }
        }

        double getmean() {
            return mean;
        }
        double getmeanAfter() {
            return meanAfter;
        }
        int getSize() {
            return size;
        }
        int getSizeAfter() {
            return sizeAfter;
        }

      };
   

int main() {
    Vector v = Vector();
    int num;
    int counting = 0;

    cout<<setprecision(2)<<fixed;
    while(1)
    {
        cin >> num;
        if(num == -9) break;
        v.addData(num); 
    }

    v.meanfunction();

    while(1){
        cin>> num;
        if(num ==-9) break;
        v.removeData(num, counting);
        counting++;
    }

    v.meanfunctionAfter();

    cout<<v.getSize()<<" "<<v.getSizeAfter()<<endl;
    cout<<v.getmean()<<" "<<v.getmeanAfter()<<endl;


return 0;
    
}