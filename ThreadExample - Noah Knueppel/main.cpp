#include <iostream>
#include <thread>
#include <chrono>

void college_report1(void)
{
        int loop = 0;
        while(loop < 2000)
        {  
            std::this_thread::sleep_for(std::chrono::milliseconds(0555));
            std::cout << "College 1's report: " << loop << std::endl;
            loop++;
        }
}

void college_report2(void)
{
        int loop = 0;
        while(loop < 2000)
        {
           std::this_thread::sleep_for(std::chrono::milliseconds(0777));
           std::cout << "College 2's report: " << loop << std::endl;
           loop++;
        }
}

int main()
{
   char result;
   
   std::thread college_thread1(college_report1); 
   std::thread college_thread2(college_report2); 

  
   std::cout << "Colleges Reporting:" << std::endl;
   
   college_thread1.join();
   college_thread2.join();
   
   return 1;
}
