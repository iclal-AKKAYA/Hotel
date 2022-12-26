#include<iostream>
#include<fstream>
#include<string>
#ifndef NODE_H
#define NODE_H

using namespace std;
class Kisi {
public:
	string adi;
	string soyadi;
	string tc;
	string cinsiyet;
	void olustur();
	void dosyayaYaz(string url, string data);
	void Giris();
	void Cikis();
	string odaNo;
	int odaKisiKapasitesi;
	int gunlukOdaFiyati;
	bool temizMi;
	bool ekstraTemizlik;
	bool doluMu;
	string odaturu;

	Kisi()
	{
		this->odaKisiKapasitesi;
		this->doluMu = false;
		this->ekstraTemizlik = false;
		this->temizMi = true;
	}
};
class Node
{
	string data;
	Node* sonraki;
public:

	Node()
	{
		this->sonraki = NULL;
	}

	void ekle(Node* bas, string datam)
	{
		if (bas->data == "")
		{
			bas->data = datam;
			bas->sonraki = NULL;
		}
		else
		{
			Node* adým = bas;
			Node* yeni_node = new Node();
			yeni_node->data = datam;
			while (adým->sonraki != NULL)
			{
				adým = adým->sonraki;
			}
			yeni_node->sonraki = NULL;
			adým->sonraki = yeni_node;
		}
	}

	void yazdýr() // listeyi yazdýrýr
	{
		Node* bas;
		Node* adým = bas;
		while (adým != NULL)
		{
			cout << adým->data << endl;
			adým = adým->sonraki;
		}
	}

	void nodeDosyayaYazdýr(Node* bas, string url) // listeyi .txt ye yazdýrýr
	{
		ofstream yaz(url, ios::app); //sondan eklesin diye
		Node* adým = bas;
		while (adým != NULL)
		{
			yaz << adým->data << endl;
			adým = adým->sonraki;
		}
		yaz.close();
	}

	void print(Node* head)
	{
		Node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << " ";
			temp = temp->sonraki;
		}
	}

	void writeToTxt(string url, string data)
	{
		string fileUrl = "C:\\Odalar\\A_tipi\\" + url + ".txt";
		ofstream write(fileUrl, ios::app);
		write << data << endl;
		write.close();
	}

	//deneme amaçlý oluþturuldu
	//void print(Kisi* Kisi, int i)
	//{
	//	string url[] = {"A-110"};
	//	string data;
	//	for (int j = 0; j < i; j++)
	//	{
	//		data = (Kisi + j)->adi + " "
	//			+ (Kisi + j)->soyadi + " "
	//			+ (Kisi + j)->tc + " "
	//			+ (Kisi + j)->cinsiyet;
	//		writeToTxt(url[j],data);
	//	}
	//}

};

#endif // !NODE_H
class Atipi_oda : public Kisi
{
public:
	Node* KisiBilgileri;
	Node* OdaBilgileri;
	Kisi* taKisi;
	string oda_tipiUrl = "C:\\Odalar\\A_tipi\\A100.txt";



	void olustur()
	{
		KisiBilgileri = new Node();
		taKisi = new Kisi[2];
		string odaNo;
		cout << "ODA NO: ";
		cin >> odaNo;
		for (int j = 0; j < 2; j++)
		{
			cout << "ADI: ";
			cin >> (taKisi + j)->adi;
			cout << "SOYADI: ";
			cin >> (taKisi + j)->soyadi;
			cout << "TC: ";
			cin >> (taKisi + j)->tc;
			cout << "CINSIYET: ";
			cin >> (taKisi + j)->cinsiyet;

		}
		cout << "--------------------------- Odaya Giriþ Yapildi-------------------------";
		writeToTxt(taKisi, odaNo, 2);
	}


	void writeToTxt(Kisi* kisi, string url, int i)
	{
		string fileUrl = "C:\\Odalar\\A_tipi\\" + url + ".txt";
		ofstream write(fileUrl, ios::app);
		string dataKisi;
		for (int j = 0; j < i; j++)
		{
			dataKisi = "ADI SOYADI: " + (kisi + j)->adi + " " + (kisi + j)->soyadi + " "
				+ "\nCINSIYET: " + (kisi + j)->cinsiyet + " " + " \nTC NO: " + (kisi + j)->tc + "\n";
			write << dataKisi << endl;
		}
		write.close();
	}
};

class Btipi_oda : public Kisi
{
public:
	Node* KisiBilgileri;
	Node* OdaBilgileri;
	Kisi* taKisi;
	string oda_tipiUrl = "C:\\Odalar\\B_tipi.txt";



	void olustur()
	{
		KisiBilgileri = new Node();
		taKisi = new Kisi[3];
		string odaNo;
		cout << "ODA NO: ";
		cin >> odaNo;
		for (int j = 0; j < 3; j++)
		{
			cout << endl;
			cout << "ADI: ";
			cin >> (taKisi + j)->adi;
			cout << "SOYADI: ";
			cin >> (taKisi + j)->soyadi;
			cout << "TC: ";
			cin >> (taKisi + j)->tc;
			cout << "CINSIYET: ";
			cin >> (taKisi + j)->cinsiyet;

		}
		cout << "--------------------------- Odaya Giriþ Yapildi-------------------------";
		writeToTxt(taKisi, odaNo, 3);
	}


	void writeToTxt(Kisi* kisi, string url, int i)
	{
		string fileUrl = "C:\\Odalar\\B_tipi\\" + url + ".txt";
		ofstream write(fileUrl, ios::app);
		string dataKisi;
		for (int j = 0; j < i; j++)
		{
			dataKisi = "ADI SOYADI: " + (kisi + j)->adi + " " + (kisi + j)->soyadi + " "
				+ "\nCINSIYET: " + (kisi + j)->cinsiyet + " " + " \nTC NO: " + (kisi + j)->tc + "\n";
			write << dataKisi << endl;
		}
		write.close();
	}
};

class Ctipi_oda : public Kisi //5 kiþilik oda
{
public:
	Node* KisiBilgileri;
	Node* OdaBilgileri;
	Kisi* taKisi;
	string oda_tipiUrl = "C:\\Odalar\\C_tipi.txt";



	void olustur()
	{
		KisiBilgileri = new Node();
		taKisi = new Kisi[5];
		string odaNo;
		cout << "ODA NO: ";
		cin >> odaNo;
		for (int j = 0; j < 5; j++)
		{
			cout << endl;
			cout << "ADI: ";
			cin >> (taKisi + j)->adi;
			cout << "SOYADI: ";
			cin >> (taKisi + j)->soyadi;
			cout << "TC: ";
			cin >> (taKisi + j)->tc;
			cout << "CINSIYET: ";
			cin >> (taKisi + j)->cinsiyet;

		}
		cout << "--------------------------- Odaya Giriþ Yapildi-------------------------";
		writeToTxt(taKisi, odaNo, 5);
	}


	void writeToTxt(Kisi* kisi, string url, int i)
	{
		string fileUrl = "C:\\Odalar\\C_tipi\\" + url + ".txt";
		ofstream write(fileUrl, ios::app);
		string dataKisi;
		for (int j = 0; j < i; j++)
		{
			dataKisi = "ADI SOYADI: " + (kisi + j)->adi + " " + (kisi + j)->soyadi + " "
				+ "\nCINSIYET: " + (kisi + j)->cinsiyet + " " + " \nTC NO: " + (kisi + j)->tc + "\n";
			write << dataKisi << endl;
		}
		write.close();
	}
};

class VIPtipi_oda : public Kisi
{
public:
	Node* KisiBilgileri;
	Node* OdaBilgileri;
	Kisi* taKisi;
	string oda_tipiUrl = "C:\\Odalar\\VIP_tipi.txt";



	void olustur()
	{
		KisiBilgileri = new Node();
		taKisi = new Kisi[1];
		string odaNo;
		cout << "ODA NO: ";
		cin >> odaNo;
		for (int j = 0; j < 1; j++)
		{
			cout << endl;
			cout << "ADI: ";
			cin >> (taKisi + j)->adi;
			cout << "SOYADI: ";
			cin >> (taKisi + j)->soyadi;
			cout << "TC: ";
			cin >> (taKisi + j)->tc;
			cout << "CINSIYET: ";
			cin >> (taKisi + j)->cinsiyet;

		}
		cout << "--------------------------- Odaya Giris Yapildi-------------------------";
		writeToTxt(taKisi, odaNo, 1);
	}


	void writeToTxt(Kisi* kisi, string url, int i)
	{
		string fileUrl = "C:\\Odalar\\VIP_tipi\\" + url + ".txt";
		ofstream write(fileUrl, ios::app);
		string dataKisi;
		for (int j = 0; j < i; j++)
		{
			dataKisi = "ADI SOYADI: " + (kisi + j)->adi + " " + (kisi + j)->soyadi + " "
				+ "\nCINSIYET: " + (kisi + j)->cinsiyet + " " + " \nTC NO: " + (kisi + j)->tc + "\n";
			write << dataKisi << endl;
		}
		write.close();
	}
};

void Kisi::Giris()
{
	Node* node = new Node();
	Atipi_oda* a = new Atipi_oda();
	Btipi_oda* b = new Btipi_oda();
	Ctipi_oda* c = new Ctipi_oda();
	VIPtipi_oda* V = new VIPtipi_oda();
	char secim;
	
	int odaFiyati;
	int toplamGelir = 0;

	cout << "A || B || C || V \noda tipi girin: ";
	cin >> secim;
	switch (secim)
	{
	case 'A':
		a->olustur();
		odaFiyati = 3000;
		toplamGelir = toplamGelir + odaFiyati;
		break;
	case 'B':
		b->olustur();
		odaFiyati = 5000;
		toplamGelir = toplamGelir + odaFiyati;
		break;
	case 'C':
		c->olustur();
		odaFiyati = 7000;
		toplamGelir = toplamGelir + odaFiyati;
		break;
	case 'V':
		V->olustur();
		odaFiyati = 9000;
		toplamGelir = toplamGelir + odaFiyati;
		break;
	default:
		break;
	}

}


void Kisi::Cikis()
{
	string odaTipi;
	string odaNo;
	string kapasite;
	string url = "C:\\Odalar\\" + odaTipi + "_tipi\\" + odaTipi + "-" + odaNo + ".txt";
	remove(url.c_str());

	cout << "A || B || C || VIP \n oda tipi seciniz: \n";
	cin >> odaTipi;
	cout << "\noda no giriniz: \n";
	cin >> odaNo;

	if (odaTipi == "A")
		kapasite = "2";

	else if (odaTipi == "B")
		kapasite = "3";

	else if (odaTipi == "C")
		kapasite = "5";

	else if (odaTipi == "VIP")
		kapasite = "1";

	else
		cout << "HATALÝ GÝRÝS";

	fstream file;
	file.open(url);
	if (file.is_open()) {

		file << "--------------------------- \nODA NO : A\nODA TURU : " + odaTipi + " \nODA KAPASITE : " + kapasite + " \nGUNLUK FIYAT : 3000 \nDOLULUK : 0 \nTEMIZLIK : 1 * nARA TEMIZLIK : 0 \n--------------------------";

	}
	file.close();

	cout << "--------------------------- Cikis Yapildi-------------------------";

}
int main()
{
	Kisi k;
	int sec;

	cout << "giris islemi ise 1\ncikis islemi ise 2\n";
	cin >> sec;
	switch (sec)
	{
	case 1:
		k.Giris();

		break;

	case 2:
		k.Cikis();
		break;
	default:
		break;
	}
}
