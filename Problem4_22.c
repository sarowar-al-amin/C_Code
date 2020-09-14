#include<stdio.h>
#include<math.h>


double calculationOfHeight(double c, double a){
    double x = sqrt((c*c) - (a*a));
    return x;
}

double calculationOfC2(double p, double q){
    double c = (p*q)/(p+q);

    return c;
}

int main(){

    double a,b, c;

    printf("Enter the length of stair a, stair b and the intersection point c: \n");
    scanf("%lf%lf%lf", &a, &b, &c);

    double w = (a+b)/2;
    double preW = 2.1*w/5-2.21;
    double c2 = 0.0;
    
    // printf("\n%lf\n", a);
    int truth = 1;
    if ( c > a || c > b){
        return 0;
    }

    while(truth){
        
        double p = calculationOfHeight(a, w);
        double q = calculationOfHeight(b, w);

        c2 = calculationOfC2(p , q);
        double temp = w;
        // preW = (c2/c)*w;
        
        if (c > c2){
            w += (abs(w - preW));
        }else
        {
            w -= (abs(w - preW));
        }
        preW = temp;
        truth++;
        

        // printf("%lf->%lf  ", w, preW);
        // printf("%lf ", (c- c2));
        if(truth == 40000 || (c- c2) == 0){
            // printf("\n%d \n", truth -1);
            truth = 0;
        }
        
        
    }

    printf("\n(Answer) The road is about %.3lf unit wide.\n", w);


    return 0;
}