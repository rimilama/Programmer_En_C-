#pragma once
//Point dans un plan
class CPoint
{
private:
	//Donn�es membres de la classe
	int nX;
	int nY;

protected:


public:

	//Assesseurs
	int getX();
	int getY();

	//Mutateurs
	void setX(int nX);
	void setY(int nY);

};

