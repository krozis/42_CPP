#include <string>

class Personnage
{
private:

	// Attributs
	std::string 	m_name;
	int				m_hp;
	int 			m_mana;
	std::string 	m_weapon;
	int				m_dmg;

	// Methodes
	void	recevoirDegats(int dmg)
	{

	}

	void	attaquerCible(Personnage &cible)
	{

	}

	void	boirePotion(int	potion_value)
	{

	}
	void	changerArme(std::string new_weapon, int dmg_new_weapon)
	{

	}
	bool	est_vivant()
	{
		
	}

public:
	Personnage(/* args */);
	~Personnage();
};

Personnage::Personnage(/* args */)
{
}

Personnage::~Personnage()
{
}
