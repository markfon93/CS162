class Human {
  private:
    string nickname;
    int id;
    bool hasId;

  public:
    void stun(Zombie* id);
    void isTagged();


};



class Zombie {
  private:
    string nickname;
    int* iDArray;
    double lifeTimer;
    double stunTimer;
    bool isAlive;
    int hungerLevel;

  public:
    void attack(Human* id);
    void setLifeTimer();
    void setStunTimer();
    void setHunger();
    void setLife();
    void setStun(bool stunned);


};
