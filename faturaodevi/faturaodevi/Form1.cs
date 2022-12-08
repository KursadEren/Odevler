namespace faturaodevi
{
    using System;
    using System.Collections.Generic;
    using System.ComponentModel;
    using System.Data;
    using System.Drawing;
    using System.Linq;
    using System.Text;
    using System.Threading.Tasks;
    using System.Windows.Forms;

    
        public partial class Form1 : Form
        {    
                
            Label lblnesne = new Label();
            TextBox tbx1 = new TextBox();
            public Form1()
            {
                InitializeComponent();
                BackColor = Color.Orange;
                lblnesne.Top = 150;
                lblnesne.Left = 300;
                lblnesne.BackColor = Color.Red;
                lblnesne.Width = 300;
                this.Controls.Add(lblnesne);


                tbx1.Top = 100;
                tbx1.Width = 300;
                tbx1.BackColor = Color.Red;
                tbx1.Left = 300;
                this.Controls.Add(tbx1);


                Button btn1 = new Button();
                btn1.Text = "Hesapla";
                btn1.Top = 200;
                btn1.Left = 300;
                btn1.BackColor = Color.Red;
                btn1.Width = 300;
                btn1.Height = 40;

                this.Controls.Add(btn1);

                btn1.Click += new EventHandler(Olustur);

            }

            void Olustur(object sender, EventArgs e)
            {
                string yaziyaCevir(decimal tutar)
                {
                    string sTutar = tutar.ToString("F2").Replace('.', ','); // Replace('.',',') ondalık ayracının . olma durumu için            
                    string lira = sTutar.Substring(0, sTutar.IndexOf(',')); //tutarın tam kısmı
                    string kurus = sTutar.Substring(sTutar.IndexOf(',') + 1, 2);
                    string yazi = "";

                    string[] birler = { "", " BİR", " İKİ", " ÜÇ", " DÖRT", " BEŞ", " ALTI", " YEDİ", " SEKİZ", " DOKUZ" };
                    string[] onlar = { "", " ON", " YİRMİ", " OTUZ", " KIRK", " ELLİ", " ALTMIŞ", " YETMİŞ", " SEKSEN", " DOKSAN" };
                    string[] binler = { "KATRİLYON", "TRİLYON", "MİLYAR", "MİLYON", "BİN", "" }; //KATRİLYON'un önüne ekleme yapılarak artırabilir.

                    int grupSayisi = 6; //sayıdaki 3'lü grup sayısı. katrilyon içi 6. (1.234,00 daki grup sayısı 2'dir.)
                                        //KATRİLYON'un başına ekleyeceğiniz her değer için grup sayısını artırınız.

                    lira = lira.PadLeft(grupSayisi * 3, '0'); //sayının soluna '0' eklenerek sayı 'grup sayısı x 3' basakmaklı yapılıyor.            

                    string grupDegeri;

                    for (int i = 0; i < grupSayisi * 3; i += 3) //sayı 3'erli gruplar halinde ele alınıyor.
                    {
                        grupDegeri = "";

                        if (lira.Substring(i, 1) != "0")
                            grupDegeri += birler[Convert.ToInt32(lira.Substring(i, 1))] + "YÜZ"; //yüzler                

                        if (grupDegeri == "BİRYÜZ") //biryüz düzeltiliyor.
                            grupDegeri = "YÜZ";

                        grupDegeri += onlar[Convert.ToInt32(lira.Substring(i + 1, 1))]; //onlar

                        grupDegeri += birler[Convert.ToInt32(lira.Substring(i + 2, 1))]; //birler                

                        if (grupDegeri != "") //binler
                            grupDegeri += binler[i / 3];

                        if (grupDegeri == "BİRBİN") //birbin düzeltiliyor.
                            grupDegeri = "BİN";

                        yazi += grupDegeri;
                    }

                    if (yazi != "")
                        yazi += " TL ";

                    int yaziUzunlugu = yazi.Length;

                    if (kurus.Substring(0, 1) != "0") //kuruş onlar
                        yazi += onlar[Convert.ToInt32(kurus.Substring(0, 1))];

                    if (kurus.Substring(1, 1) != "0") //kuruş birler
                        yazi += birler[Convert.ToInt32(kurus.Substring(1, 1))];

                    if (yazi.Length > yaziUzunlugu)
                        yazi += " KURUŞ";
                    else
                        yazi += "SIFIR KURUŞ";

                    return yazi;
                }

                lblnesne.Text = yaziyaCevir(Convert.ToDecimal(tbx1.Text));
            }

            private void Form1_Load(object sender, EventArgs e)
            {

            }
        }
    }
