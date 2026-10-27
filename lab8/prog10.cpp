#include <iostream>
using namespace std;

class Recommender {
public:
    virtual void generateRecommendation(int userRating, int popularity) {
        cout << "Generating recommendation" << endl;
    }
};

class PersonalizedRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.7 * userRating + 0.3 * popularity;
        cout << "Personalized score: " << score << endl;
    }
};

class TrendingRecommender : public Recommender {
public:
    void generateRecommendation(int userRating, int popularity) override {
        double score = 0.3 * userRating + 0.7 * popularity;
        cout << "Trending score: " << score << endl;
    }
};

int main() {
    PersonalizedRecommender p;
    TrendingRecommender t;

    Recommender *r1 = &p;
    Recommender *r2 = &t;

    int rating, popularity;

    cout << "Enter user rating (0-100): ";
    cin >> rating;

    cout << "Enter popularity (0-100): ";
    cin >> popularity;

    r1->generateRecommendation(rating, popularity);
    r2->generateRecommendation(rating, popularity);

    return 0;
}