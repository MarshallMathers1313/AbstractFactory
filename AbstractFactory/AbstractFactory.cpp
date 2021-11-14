#include "PCConfigurator.h"
#include "HomeFactory.h"
#include "OfficeFactory.h"
int main()
{
	PCFactory* pcFactory = new HomeFactory;

	PCFactory* pcFactory1 = new OfficeFactory;

	PC* pc = new PC;
	
	

	PCConfigurator* config = new PCConfigurator;


	config->setFactory(pcFactory);

	config->configure(pc);

	pc->print();

	
	config->setFactory(pcFactory1);
	config->configure(pc);
	pc->print();

}