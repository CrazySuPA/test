#include "led.h"
#include "delay.h"
#include "key.h"
#include "sys.h"
#include "usart.h"
#include "exti.h"
#include "beep.h"
//ALIENTEKս��STM32������ʵ��5
//�ⲿ�ж�ʵ��  
//����֧�֣�www.openedv.com
//������������ӿƼ����޹�˾ 
	
 int main(void)
 {		
 
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_Configuration(); 	 //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(9600);	 //���ڳ�ʼ��Ϊ9600
 	LED_Init();		  		//��ʼ����LED���ӵ�Ӳ���ӿ�
	BEEP_Init();         	//��ʼ���������˿�
	KEY_Init();         	//��ʼ���밴�����ӵ�Ӳ���ӿ�
	EXTIX_Init();		 	//�ⲿ�жϳ�ʼ��
	LED0=0;					//����LED0
	while(1)
	{	    
		printf("OK\r\n");	
		delay_ms(1000);	  
	}
 }



//safdasfd
ս���� 
