#include "helper.h"
#include <stdlib.h>

/*
* ���� get_roll_number();
* ���ã���ȡ����������õĵ�����Ϊ1��6���������õ���������ڳ����ʼ��ʱ��������
* ����ֵ������������õĵ�����Ϊ1��6֮��
* ���ߣ���̩Ȼ
*/
int get_roll_number()
{
	return rand() % 6 + 1;
}

/*
* ���� int get_tools_amount(Player *player);
* ������player ָ��������ݽṹ���ָ�룬��ʾĳһ���
* ���ã���ȡָ����ҵĵ��ߵ�����
* ����ֵ��ָ����ҵĵ��ߵ�����
* ���ߣ���̩Ȼ
*/
int get_tools_amount(Player *player)
{
	return player -> block_amount + player -> bomb_amount + player -> robot_amount;
}