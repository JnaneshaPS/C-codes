//Write a program that calculates the day of the week for any particular date in the past or future.

string getDayOfWeek(int d, int m, int y) {
        // code here
        if(m==1||m==2){
            m+=12;
            y-=1;
            
        }
        
        int k=y%100;
        int j=y/100;
        
        int h=(d+13*(m+1)/5+k+k/4+j/4+5*j)%7;
        
            string days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

return days[h];
    }
