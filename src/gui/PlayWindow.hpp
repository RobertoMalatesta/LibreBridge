#ifndef PLAYWINDOW_HPP
#define PLAYWINDOW_HPP

#include <vector>
#include <QMainWindow>
#include <QGridLayout>
#include "../LibreBridge.hpp"
#include "../Card.hpp"
class CardLayout;
class QMenuBar;
class QPushButton;
class QLabel;
class CardWidget;
class DealSelectionWindow;
class BidWindow;
class Game;
class PlayedCardsLayout;

class PlayWindow : public QMainWindow
{
	Q_OBJECT
	public:
		explicit PlayWindow(QWidget *parent = Q_NULLPTR);
		~PlayWindow();
		void closeEvent(QCloseEvent *event);
		void createAllHandWidgets();
		void createHandWidgets(Position p);
		void destroyAllHandWidgets();
		void destroyHandWidgets(Position p);
		Game* getGame() const;
		void startBidding();
		bool getCardsAreClickable() const;
		void setCardsAreClickable(bool c);
		void updateDealInfoLabel();
		void updateContractInfoLabel();
		void playCard(CardWidget* c);
		void updateCurrentPlayerArrow();
		void resumeFromPause();
	signals:
	public slots:
		void playingProcess();
	protected:
		void resizeEvent(QResizeEvent *event) override;
	private:
		DealSelectionWindow *dealSelectionWindow;
		BidWindow *bidWindow;
		QMenuBar *menuBar;
		QMenu *fileMenu;
		QWidget *centralWidget;
		Game *game;
		QGridLayout gridLayout;
		CardLayout *cardLayouts[4];
		std::vector<CardWidget*> handsWidgets[4];
		bool cardsAreClickable;
		QLabel *dealInfoLabel;
		QLabel *contractInfoLabel;
		PlayedCardsLayout *playedCardsLayout;
		std::vector<CardWidget*> playedCardsWidgets;
		Suit firstSuit;
		QLabel *arrows[4];
		int tricksMade[2]; // %2 for team
		bool waitForAI;
		bool isPaused; // between hands
		CardWidget* getCardWidgetFromCard(Card c) const;
};

#endif