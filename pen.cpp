#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;



int main(void){
    double w0 = 1.0;
    double gam = 0.2;
    double dt = 0.1;
    double desv = 1.0;
    double F1 = 0.4;
    double F2 = 1.2;
    double fref = 0.2;
    int nt = 1000;
    double omega1 = 1.0;
    double omega2 = 1.0;
    double theta1 = 0.35;
    double theta2 = 0.2;
    double theta3 = 0.35;
    double theta4 = 0.25;
    double theta5 = 0.4;
    double theta6 = 0.15;
    
    ofstream outfile1;
    ofstream outfile2;
    ofstream outfile3;
    ofstream outfile4;
    ofstream outfile5;
    ofstream outfile6;
    
    outfile1.open("regu1.dat");
    for (int i = 0; i < nt; i++){
        outfile1 << theta1 << " " << theta2 << endl;
        omega1 = omega1 + dt*(-(w0*w0)*sin(theta1) - (gam*omega1) + F1*sin((fref*i*dt)+desv));
        theta1 = theta1 + dt*omega1;
        omega2 = omega2 + dt*(-(w0*w0)*sin(theta2) - (gam*omega2) + F1*sin((fref*i*dt)+desv));
        theta2 = theta2 + dt*omega2;
    }
    outfile1.close();
    
    outfile2.open("regu2.dat");
    for (int i = 0; i < nt; i++){
        outfile2 << theta3 << " " << theta4 << endl;
        omega1 = omega1 + dt*(-(w0*w0)*sin(theta3) - (gam*omega1) + F1*sin((fref*i*dt)+desv));
        theta3 = theta3 + dt*omega1;
        omega2 = omega2 + dt*(-(w0*w0)*sin(theta4) - (gam*omega2) + F1*sin((fref*i*dt)+desv));
        theta4 = theta4 + dt*omega2;
    }
    outfile2.close();
    
    outfile3.open("regu3.dat");
    for (int i = 0; i < nt; i++){
        outfile3 << theta5 << " " << theta6 << endl;
        omega1 = omega1 + dt*(-(w0*w0)*sin(theta5) - (gam*omega1) + F1*sin((fref*i*dt)+desv));
        theta5 = theta5 + dt*omega1;
        omega2 = omega2 + dt*(-(w0*w0)*sin(theta6) - (gam*omega2) + F1*sin((fref*i*dt)+desv));
        theta6 = theta6 + dt*omega2;
    }
    outfile3.close();
    
    outfile4.open("caot1.dat");
    for (int i = 0; i < nt; i++){
        outfile4 << theta1 << " " << theta2 << endl;
        omega1 = omega1 + dt*(-(w0*w0)*sin(theta1) - (gam*omega1) + F2*sin((fref*i*dt)+desv));
        theta1 = theta1 + dt*omega1;
        omega2 = omega2 + dt*(-(w0*w0)*sin(theta2) - (gam*omega2) + F2*sin((fref*i*dt)+desv));
        theta2 = theta2 + dt*omega2;
    }
    outfile4.close();
    
    outfile5.open("caot2.dat");
    for (int i = 0; i < nt; i++){
        outfile5 << theta3 << " " << theta4 << endl;
        omega1 = omega1 + dt*(-(w0*w0)*sin(theta3) - (gam*omega1) + F2*sin((fref*i*dt)+desv));
        theta3 = theta3 + dt*omega1;
        omega2 = omega2 + dt*(-(w0*w0)*sin(theta4) - (gam*omega2) + F2*sin((fref*i*dt)+desv));
        theta4 = theta4 + dt*omega2;
    }
    outfile5.close();
    
    outfile6.open("caot3.dat");
    for (int i = 0; i < nt; i++){
        outfile6 << theta5 << " " << theta6 << endl;
        omega1 = omega1 + dt*(-(w0*w0)*sin(theta5) - (gam*omega1) + F2*sin((fref*i*dt)+desv));
        theta5 = theta5 + dt*omega1;
        omega2 = omega2 + dt*(-(w0*w0)*sin(theta6) - (gam*omega2) + F2*sin((fref*i*dt)+desv));
        theta6 = theta6 + dt*omega2;
    }
    outfile6.close();
}