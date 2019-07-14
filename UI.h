
#ifndef UI_H_
#define UI_H_



void displayInit();
void displayError (char* reason);
void displayCancelError();
void displayUpdate();

void statusLedOn();
void errorLedOn();

void displayWindowState ();

#endif /* UI_H_ */
