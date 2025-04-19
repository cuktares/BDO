#include <iostream>
#include <string>

class GameDevelopmentProcess {
public:
    void start() {
        std::cout << "1. Yeni oyun fikri ortaya atıldı.\n";
        defineConcept();
        developPrototype();
        testPrototype();
        createArtAssets();
        detectAndFixBugs();
        promoteGame();
    }

private:
    void defineConcept() {
        std::cout << "2. Oyun konsepti belirleniyor...\n";
        while (!getUserApproval("Konsept onaylandı mı? (1=Evet, 0=Hayır): ")) {
            std::cout << "Konsept reddedildi. Tekrar konsept geliştiriliyor...\n";
        }
    }

    void developPrototype() {
        std::cout << "3. Prototip geliştiriliyor...\n";
    }

    void testPrototype() {
        std::cout << "4. Prototip test ediliyor...\n";
        while (!getUserApproval("Prototip testinden geçti mi? (1=Evet, 0=Hayır): ")) {
            std::cout << "Test başarısız. Prototip tekrar geliştiriliyor...\n";
            developPrototype(); 
            std::cout << "Yeni prototip yeniden test ediliyor...\n";
        }
    }

    void createArtAssets() {
        do {
            std::cout << "5. Karakter ve ortam tasarımı yapılıyor...\n";
            std::cout << "6. Animasyon ve efektler ekleniyor...\n";
        } while (!getUserApproval("Sanatsal içerik testi başarılı mı? (1=Evet, 0=Hayır): "));
    }

    void detectAndFixBugs() {
        bool needsBugFixing;
        do {
            std::cout << "7. Hatalar tespit ediliyor...\n";
            needsBugFixing = getUserApproval("Hata bulundu mu? (1=Evet, 0=Hayır): ");
            if (needsBugFixing) {
                std::cout << "8. Hatalar ayıklanıyor...\n";
            }
        } while (needsBugFixing);
    }

    void promoteGame() {
        std::cout << "9. Oyun tanıtımı yapılıyor...\n";
        std::cout << "10. Pazarlama kampanyası başlatılıyor...\n";
        std::cout << "🎉 Oyun başarıyla piyasaya sürüldü!\n";
    }

    bool getUserApproval(const std::string& question) {
        int input;
        std::cout << question;
        std::cin >> input;
        return input == 1;
    }
};

int main() {
    GameDevelopmentProcess process;
    process.start();
    return 0;
}
