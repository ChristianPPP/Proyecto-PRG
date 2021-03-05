#include <stdio.h>
#include <string.h>


struct novelan
{
  char nombre[200];
  char autor[200];
  char pclave[200];
  int aniop;
  int ran;
};

struct novelah
{
  char nombre[200];
  char autor[200];
  char pclave[200];
  int aniop;
  int ran;
};

struct informatica
{
  char nombre[200];
  char autor[200];
  char pclave[200];
  int aniop;
  int ran;
};

struct cienciasc
{
  char nombre[200];
  char autor[200];
  char pclave[200];
  int aniop;
  int ran;
};

struct ensayo
{
  char nombre[200];
  char autor[200];
  char pclave[200];
  int aniop;
  int ran;
};

int main(void) {
  struct novelan a[30];
  struct novelah b[30];
  struct informatica c[30];
  struct cienciasc d[30];
  struct ensayo e[30];

  //Libros Novelas Negras
  strcpy(a[0].nombre,"LOS LADRONES DE ENTREVIENTOS");
  strcpy(a[0].autor,"Christian Perfumo");
  strcpy(a[0].pclave,"entrevientos");
  a[0].aniop=2020;
  a[0].ran=1;

  strcpy(a[1].nombre,"LA TRILOGÍA DE LA PATAGONIA");
  strcpy(a[1].autor,"Christian Perfumo");
  strcpy(a[1].pclave,"patagonia");
  a[1].aniop=2020;
  a[1].ran=2;

  strcpy(a[2].nombre,"LA RED PÚRPURA");
  strcpy(a[2].autor,"Carmen Mola");
  strcpy(a[2].pclave,"redpurpura");
  a[2].aniop=2019;
  a[2].ran=3;

  strcpy(a[3].nombre,"LA NOVIA GITANA");
  strcpy(a[3].autor,"Carmen Mola");
  strcpy(a[3].pclave,"noviagitana");
  a[3].aniop=2018;
  a[3].ran=4;

  strcpy(a[4].nombre,"LA NENA");
  strcpy(a[4].autor,"Carmen Mola");
  strcpy(a[4].pclave,"nena");
  a[4].aniop=2020;
  a[4].ran=5;

  strcpy(a[5].nombre,"FRÍO");
  strcpy(a[5].autor,"Jordi Sierra i Fabra");
  strcpy(a[5].pclave,"frio");
  a[5].aniop=2017;
  a[5].ran=6;

  strcpy(a[6].nombre,"EL BUEN PADRE");
  strcpy(a[6].autor,"Santiago Díaz");
  strcpy(a[6].pclave,"buenpadre");
  a[6].aniop=2021;
  a[6].ran=7;

  strcpy(a[7].nombre,"LA SUERTE DEL ENANO");
  strcpy(a[7].autor,"César Pérez Gellida");
  strcpy(a[7].pclave,"suerteenano");
  a[7].aniop=2020;
  a[7].ran=8;

  strcpy(a[8].nombre,"RESCATE GRIS");
  strcpy(a[8].autor,"Christian Perfumo");
  strcpy(a[8].pclave,"rescate");
  a[8].aniop=2018;
  a[8].ran=9;

  strcpy(a[9].nombre,"LA REUNIÓN DE LOS LOBOS");
  strcpy(a[9].autor,"Marcos Paricio");
  strcpy(a[9].pclave,"reunionlobos");
  a[9].aniop=2020;
  a[9].ran=10;

  strcpy(a[10].nombre,"PROGENIE");
  strcpy(a[10].autor,"Susana Martín Gijón");
  strcpy(a[10].pclave,"progenie");
  a[10].aniop=2020;
  a[10].ran=11;

  strcpy(a[11].nombre,"LA PARADOJA DEL BIBLIOTECARIO CIEGO");
  strcpy(a[11].autor,"Ana Ballabriga");
  strcpy(a[11].pclave,"bibliotecariociego");
  a[11].aniop=2018;
  a[11].ran=12;

  strcpy(a[12].nombre,"DÓNDE ENTERRÉ A FABIANA ORQUERA");
  strcpy(a[12].autor,"Christian Perfumo");
  strcpy(a[12].pclave,"fabianaorquera");
  a[12].aniop=2014;
  a[12].ran=13;

  strcpy(a[13].nombre,"CAMINO DE LA VENGANZA: DOLOR, RABIA Y LOCURA");
  strcpy(a[13].autor,"Dani Huertas");
  strcpy(a[13].pclave,"caminovenganza");
  a[13].aniop=2019;
  a[13].ran=14;

  strcpy(a[14].nombre,"LAS FLORES NO SANGRAN: NOVELA NEGRA");
  strcpy(a[14].autor,"Alexis Ravelo");
  strcpy(a[14].pclave,"floressangran");
  a[14].aniop=2003;
  a[14].ran=15;

  strcpy(a[15].nombre,"MADAME B");
  strcpy(a[15].autor,"Sandrine Destombes");
  strcpy(a[15].pclave,"madameb");
  a[15].aniop=2020;
  a[15].ran=16;

  strcpy(a[16].nombre,"AMURAO:(MONSTRUOS EN LA OSCURIDAD)");
  strcpy(a[16].autor,"Fran Barrero");
  strcpy(a[16].pclave,"amurao");
  a[16].aniop=2018;
  a[16].ran=17;

  strcpy(a[17].nombre,"CAZADOR DE FARSANTES: MISTERIOS Y AVENTURA EN LA PATAGONIA");
  strcpy(a[17].autor,"Christian Perfumo");
  strcpy(a[17].pclave,"farsantes");
  a[17].aniop=2019;
  a[17].ran=18;

  strcpy(a[18].nombre,"ESPECIE (INSPECTORA CAMINO VARGAS 2)");
  strcpy(a[18].autor,"Susana Martín Gijón");
  strcpy(a[18].pclave,"especie");
  a[18].aniop=2021;
  a[18].ran=19;

  strcpy(a[19].nombre,"INTENSITY: A POWERFUL THRILLER OF VIOLENCE AND TERROR");
  strcpy(a[19].autor,"Dean Koontz");
  strcpy(a[19].pclave,"intensity");
  a[19].aniop=2017;
  a[19].ran=20;

  strcpy(a[20].nombre,"AMURAO:(EL PURGATORIO DE LOS NIÑOS PERDIDOS)");
  strcpy(a[20].autor,"Fran Barrero");
  strcpy(a[20].pclave,"amurao");
  a[20].aniop=2018;
  a[20].ran=21;

  strcpy(a[21].nombre,"POP. 1280");
  strcpy(a[21].autor,"Jin Thompson");
  strcpy(a[21].pclave,"pop");
  a[21].aniop=2014;
  a[21].ran=22;

  strcpy(a[22].nombre,"AMURAO:(LAS PRINCESAS NO LLORAN)");
  strcpy(a[22].autor,"Jin Thompson");
  strcpy(a[22].pclave,"amurao");
  a[22].aniop=2019;
  a[22].ran=23;

  strcpy(a[23].nombre,"AMURAO:(LA SOBERBIA DE LOS NONATOS)");
  strcpy(a[23].autor,"Fran Barrero");
  strcpy(a[23].pclave,"amurao");
  a[23].aniop=2019;
  a[23].ran=24;

  strcpy(a[24].nombre,"BOMBAY EXPRESS: UN THRILLER DE DAVID RIBAS");
  strcpy(a[24].autor,"Alfredo De Braganza");
  strcpy(a[24].pclave,"bombay");
  a[24].aniop=2019;
  a[24].ran=25;

  strcpy(a[25].nombre,"THE CHALK MAN: THE SUNDAY");
  strcpy(a[25].autor,"C.J. Tudor");
  strcpy(a[25].pclave,"chalkman");
  a[25].aniop=2018;
  a[25].ran=26;

  strcpy(a[26].nombre,"CAER");
  strcpy(a[26].autor,"Javier De Frutos");
  strcpy(a[26].pclave,"caer");
  a[26].aniop=2017;
  a[26].ran=27;

  strcpy(a[27].nombre,"AMURAO:(LA BODA ROJA)");
  strcpy(a[27].autor,"Fran Barrero");
  strcpy(a[27].pclave,"amurao");
  a[27].aniop=2019;
  a[27].ran=28;

  strcpy(a[28].nombre,"LA VERDAD DE ANNA GUIRAO");
  strcpy(a[28].autor,"Lorena Franco");
  strcpy(a[28].pclave,"annaguirao");
  a[28].aniop=2019;
  a[28].ran=29;

  strcpy(a[29].nombre,"LA CÁRCEL DE CRISTAL");
  strcpy(a[29].autor,"Fran l. González");
  strcpy(a[29].pclave,"carcelcristal");
  a[29].aniop=2019;
  a[29].ran=30;  


  //Libros de Novela Historia
  strcpy(b[0].nombre,"EL ASESINATO DE SOCRATES");
  strcpy(b[0].autor,"Marcos Chicot");
  strcpy(b[0].pclave,"asesinatosocrates");
  b[0].aniop=2016;
  b[0].ran=1;

  strcpy(b[1].nombre,"EL DEBER DEL MARQUÉS DE AILSA");
  strcpy(b[1].autor,"Veronica Mengual");
  strcpy(b[1].pclave,"debermarques");
  b[1].aniop=2021;
  b[1].ran=2;    

  strcpy(b[2].nombre,"EL ASESINATO DE PITÁGORAS");
  strcpy(b[2].autor,"Marcos Chicot ");
  strcpy(b[2].pclave,"asesinatopitagoras");
  b[2].aniop=2013;
  b[2].ran=3;

  strcpy(b[3].nombre,"ESPOSA POR ENCARGO ");
  strcpy(b[3].autor,"Carolyn Connor");
  strcpy(b[3].pclave,"esposaencargo");
  b[3].aniop=2021;
  b[3].ran=4;

  strcpy(b[4].nombre,"LA RUTA INFINITA  ");
  strcpy(b[4].autor,"José Calvo Poyato");
  strcpy(b[4].pclave,"rutainfinita");
  b[4].aniop=2019;
  b[4].ran=5;

  strcpy(b[5].nombre,"TE DOY MI CORAZÓN   ");
  strcpy(b[5].autor,"Julia Quinn");
  strcpy(b[5].pclave,"doymicorazon");
  b[5].aniop=2001;
  b[5].ran=6;

  strcpy(b[6].nombre,"LA GUARDIANA DEL AMBAR");
  strcpy(b[6].autor,"Freda Lightfoot");
  strcpy(b[6].pclave,"guardianadelambar");
  b[6].aniop=2014;
  b[6].ran=7;

  strcpy(b[7].nombre,"MI QUERIDA IRENE");
  strcpy(b[7].autor,"Clara Fuertes ");
  strcpy(b[7].pclave,"queridairene");
  b[7].aniop=2019;
  b[7].ran=8;

  strcpy(b[8].nombre,"AQUITANIA");
  strcpy(b[8].autor,"Eva Garcia Saenz de Urturi");
  strcpy(b[8].pclave,"aquitania");
  b[8].aniop=2020;
  b[8].ran=9;

  strcpy(b[9].nombre,"HIJO DE LA OSCURIDAD");
  strcpy(b[9].autor,"Jana Westwood");
  strcpy(b[9].pclave,"hijooscuridad");
  b[9].aniop=1999;
  b[9].ran=10;

  strcpy(b[10].nombre,"EL NIÑO ESCONDIDO");
  strcpy(b[10].autor,"Rhys Bowen");
  strcpy(b[10].pclave,"niñoescondido");
  b[10].aniop=2018;
  b[10].ran=11;

  strcpy(b[11].nombre,"EL VIZCONDE QUE ME AMÓ");
  strcpy(b[11].autor,"Julia Quinn");
  strcpy(b[11].pclave,"vizcondemeamo");
  b[11].aniop=2000;
  b[11].ran=12;

  strcpy(b[12].nombre,"SEDUCIENDO A MR.BRIDGERTON");
  strcpy(b[12].autor,"Julia Quinn");
  strcpy(b[12].pclave,"seduciendobridgerton");
  b[12].aniop=2002;
  b[12].ran=13;

  strcpy(b[13].nombre,"EL DUQUE Y YO");
  strcpy(b[13].autor,"Julia Quinn");
  strcpy(b[13].pclave,"duqueyyo");
  b[13].aniop=2000;
  b[13].ran=14;

  strcpy(b[14].nombre,"LOS PRIVILEGIOS DEL ÁNGEL");
  strcpy(b[14].autor,"Dolores Redondo");
  strcpy(b[14].pclave,"privilegiosangel");
  b[14].aniop=2009;
  b[14].ran=15;

  strcpy(b[15].nombre,"LAS DOCE PUERTAS");
  strcpy(b[15].autor,"Vicente Raga");
  strcpy(b[15].pclave,"docepuertas");
  b[15].aniop=2016;
  b[15].ran=16;

  strcpy(b[15].nombre,"LAS DOCE PUERTAS");
  strcpy(b[15].autor,"Vicente Raga");
  strcpy(b[15].pclave,"docepuertas");
  b[15].aniop=2016;
  b[15].ran=16;

  strcpy(b[16].nombre,"EL ASESINATO DE PLATÓN ");
  strcpy(b[16].autor,"Marcos Chicot ");
  strcpy(b[16].pclave,"asesinatoplatOn");
  b[16].aniop=2015;
  b[16].ran=17;

  strcpy(b[17].nombre,"LA LENGUA DE LOS SECRETOS");
  strcpy(b[17].autor,"Martín Abrisketa");
  strcpy(b[17].pclave,"lenguasecretos");
  b[17].aniop=2015;
  b[17].ran=18;

  strcpy(b[18].nombre,"LA MALDICIÓN DEL DUQUE DE ASHTON");
  strcpy(b[18].autor,"Verónica Mengual");
  strcpy(b[18].pclave,"maldiciondeashton");
  b[18].aniop=2021;
  b[18].ran=19;

  strcpy(b[19].nombre,"A SIR PHILLIP, CON AMOR");
  strcpy(b[19].autor,"Julia Quinn");
  strcpy(b[19].pclave,"sirpillip");
  b[19].aniop=2003;
  b[19].ran=20;

  strcpy(b[20].nombre,"EL MOZÁRABE");
  strcpy(b[20].autor,"Jesús Sánchez Adalib");
  strcpy(b[20].pclave,"mozarabe");
  b[20].aniop=2001;
  b[20].ran=21;
  
  strcpy(b[21].nombre,"LA ROSA DE HEREFORD");
  strcpy(b[21].autor,"Brenna Watson");
  strcpy(b[21].pclave,"rosahereford");
  b[21].aniop=2021;
  b[21].ran=22;

  strcpy(b[22].nombre,"LA ROSA DE HEREFORD");
  strcpy(b[22].autor,"Megan Maxwell");
  strcpy(b[22].pclave,"guerramaxwell");
  b[22].aniop=2014;
  b[22].ran=23;
  
  strcpy(b[23].nombre,"POR UN BESO ");
  strcpy(b[23].autor,"Julia Quinn");
  strcpy(b[23].pclave,"unbeso");
  b[23].aniop=2020;
  b[23].ran=24;

  strcpy(b[24].nombre,"BUSCANDO ESPOSA");
  strcpy(b[24].autor,"Julia Quinn");
  strcpy(b[24].pclave,"buscandoesposa");
  b[24].aniop=2020;
  b[24].ran=25;

  strcpy(b[25].nombre,"EL COLOR DE LOS SECRETOS");
  strcpy(b[25].autor,"Lindsay JAYNE ASHFORD");
  strcpy(b[25].pclave,"colorsecretos");
  b[25].aniop=2015;
  b[25].ran=26;
  
  strcpy(b[26].nombre,"EL CORAZÓN DE UNA BRIDGERTON ");
  strcpy(b[26].autor,"Julia Quinn");
  strcpy(b[26].pclave,"corazonbridgerton");
  b[26].aniop=2001;
  b[26].ran=27;
  
  strcpy(b[27].nombre,"EL DESACUERDO DE UN LORD RETICENTE");
  strcpy(b[27].autor,"Verónica Mengual");
  strcpy(b[27].pclave,"desacuerdolord");
  b[27].aniop=2001;
  b[27].ran=28;

  strcpy(b[28].nombre,"POR CULPA DE MISS BRIDGERTON  ");
  strcpy(b[28].autor,"Julia Quinn");
  strcpy(b[28].pclave,"porculpadebridgerton");
  b[28].aniop=2016;
  b[28].ran=29;

  strcpy(b[29].nombre,"LA FLOR DEL AZAFRÁN AMARILLO");
  strcpy(b[29].autor,"Laila Ibrahim");
  strcpy(b[29].pclave,"florazafran");
  b[29].aniop=2010;
  b[29].ran=30;

  //Libros de Informatica
  strcpy(c[0].nombre,"CRACKING THE CODING INTERVIEW: 189 PROGRAMMING QUESTIONS AND SOLUTIONS");
  strcpy(c[0].autor,"Gayle Laakmann McDowell");
  strcpy(c[0].pclave,"cracking");
  c[0].aniop=2018;
  c[0].ran=1;

  strcpy(c[1].nombre,"CURSO DE CRASH DE PYTHON");
  strcpy(c[1].autor,"Eric Matthes");
  strcpy(c[1].pclave,"crashpython");
  c[1].aniop=2019;
  c[1].ran=2;

  strcpy(c[2].nombre,"ALGORITHMS TO LIVE BY: THE COMPUTER SCIENCE OF HUMAN DECISIONS");
  strcpy(c[2].autor,"Brian Christian");
  strcpy(c[2].pclave,"algorithms");
  c[2].aniop=2016;
  c[2].ran=3;

  strcpy(c[3].nombre,"THE AGE OF SURVEILLANCE CAPITALISM: THE FIGHT FOR A HUMAN FUTURE AT THE NEW FRONTIER OF POWER: BARACK OBAMA'S BOOKS OF 2019");
  strcpy(c[3].autor,"Shoshana Zuboff");
  strcpy(c[3].pclave,"agesurveillance");
  c[3].aniop=2019;
  c[3].ran=4;

  strcpy(c[4].nombre,"GUÍA DE EXÁMENES TODO EN UNO DE CERTIFICACIÓN COMPTIA A+ DÉCIMA EDICIÓN (EXÁMENES 220-1001 y 220-1002) - TAPA DURA POR MIKE MEYERS");
  strcpy(c[4].autor,"José Calvo Poyato");
  strcpy(c[4].pclave,"guiaexamenes");
  c[4].aniop=2019;
  c[4].ran=5;

  strcpy(c[5].nombre,"JUNK DNA: A JOURNEY THROUGH THE DARK MATTER OF THE GENOME");
  strcpy(c[5].autor,"Nessa Carey");
  strcpy(c[5].pclave,"junkdna");
  c[5].aniop=2015;
  c[5].ran=6;

  strcpy(c[6].nombre,"MACHINE LEARNING: A STEP-BY-STEP GUIDE FROM BEGINNERS TO EXPERT");
  strcpy(c[6].autor,"Siena Sylvia");
  strcpy(c[6].pclave,"machine");
  c[6].aniop=2019;
  c[6].ran=7; 

  strcpy(c[7].nombre,"HANDS-ON MACHINE LEARNING WITH SCIKIT-LEARN, KERAS, AND TENSOEFLOW: CONCEPTS, TOOLS, AND TECHNIQUES TO BUILD INTELLIGENT SYSTEMS");
  strcpy(c[7].autor,"Aurélien Géron");
  strcpy(c[7].pclave,"hands");
  c[7].aniop=2017;
  c[7].ran=8;

  strcpy(c[8].nombre,"THE AGE OF SURVEILLANCE CAPITALISM: THE FIGHT FOR A HUMAN FUTURE AT THE NEW FRONTIER OF POWER");
  strcpy(c[8].autor,"Shoshana Zuboff");
  strcpy(c[8].pclave,"agesurveillance");
  c[8].aniop=2020;
  c[8].ran=9;

  strcpy(c[9].nombre,"AUTOMATE THE BORING STUFF WITH PYTHON, 2nd EDITION: PRACTICAL PROGRAMMING FOR TOTAL BEGINNERS");
  strcpy(c[9].autor,"Al Sweigart");
  strcpy(c[9].pclave,"automateboring");
  c[9].aniop=2019;
  c[9].ran=10; 

  strcpy(c[10].nombre,"MACHINE LEARNING: A STEP-BY-STEP GUIDE FROM BEGINNERS TO EXPERT. CONCEPTS AND TECHNIQUES: BEGINNERS INTERMEDIATE & ADVANCED");
  strcpy(c[10].autor,"Siena Sylvia");
  strcpy(c[10].pclave,"machine");
  c[10].aniop=2019;
  c[10].ran=11;
  
  strcpy(c[11].nombre,"THE AGE OF SURVEILLANCE CAPITALISM: THE FIGHT FOR A HUMAN FUTURE AT THE NEW FRONTIER OF POWER");
  strcpy(c[11].autor,"Shoshana Zuboff");
  strcpy(c[11].pclave,"agesurveillance");
  c[11].aniop=2019;
  c[11].ran=12;

  strcpy(c[12].nombre,"JUNK DNA: A JOURNEY THOUGH THE DARK MATTER OF THE GENOME");
  strcpy(c[12].autor,"Nessa Carey");
  strcpy(c[12].pclave,"junkdna");
  c[12].aniop=2015;
  c[12].ran=13;

  strcpy(c[13].nombre,"SYSTEM DESIGN INTERVIEW-AN INSIDER'S GUIDE, SECOND EDITION");
  strcpy(c[13].autor,"Alex Xu");
  strcpy(c[13].pclave,"systemdesign");
  c[13].aniop=2017;
  c[13].ran=14; 

  strcpy(c[14].nombre,"WTF IS MY PASSWORD: PASSWORD BOOK LOG BOOK ALPHABETICALPOCKET SIZE PURPLE FLOWER COVER BLACK FRAME 6x9");
  strcpy(c[14].autor,"Paper Kate Publishing");
  strcpy(c[14].pclave,"wtfpassword");
  c[14].aniop=2019;
  c[14].ran=15;

  strcpy(c[15].nombre,"GÖDEL, ESCHER, BACH: AN ETERNAL GOLDEN BRAID");
  strcpy(c[15].autor,"Douglas R Hofstadter");
  strcpy(c[15].pclave,"gödel");
  c[15].aniop=1979;
  c[15].ran=16;
  
  strcpy(c[16].nombre,"THINKING IN SYSTEMS: A PRIMER");
  strcpy(c[16].autor,"Donella H.Meadows");
  strcpy(c[16].pclave,"systems");
  c[16].aniop=2008;
  c[16].ran=17;

  strcpy(c[17].nombre,"AL SUPERPOWERS: CHINA, SILICON VALLEY, AND THE NEW WORLD ORDER");
  strcpy(c[17].autor,"Kai-Fu-Lee");
  strcpy(c[17].pclave,"aisuperpowers");
  c[17].aniop=2018;
  c[17].ran=18;

  strcpy(c[18].nombre,"A COMMON-SENSE GUIDE TO DATA STRUCTURES AND ALGORITHMS, SECOND EDITION: LEVEL UP YOUR CORE PROGRAMMING SKILLS");
  strcpy(c[18].autor,"Jay Wengrow");
  strcpy(c[18].pclave,"commonsense");
  c[18].aniop=2021;
  c[18].ran=19;

  strcpy(c[19].nombre,"AP COMPUTER SCIENCE A: WITH 6 PRACTICE TESTS (BARRON'S TEST PREP)");
  strcpy(c[19].autor,"Roselyn Teukolsky");
  strcpy(c[19].pclave,"apcomputer");
  c[19].aniop=2019;
  c[19].ran=20;

  strcpy(c[20].nombre,"INTRODUCTION TO ALGORITHMS, 3rd EDITION (THE MIT PRESS)");
  strcpy(c[20].autor,"Thomas H. Cormen");
  strcpy(c[20].pclave,"mitpress");
  c[20].aniop=2021;
  c[20].ran=21;                        

  strcpy(c[21].nombre,"PYTHON FOR DATA ANALYSIS: DATA WRANGLING WITH PANDAS, NUMPY, AND IPYTHON");
  strcpy(c[21].autor,"Wes McKinney");
  strcpy(c[21].pclave,"pythondata");
  c[21].aniop=2011;
  c[21].ran=22;

  strcpy(c[22].nombre,"SUPERINTELLIGENCE: PATHS, DANGERS");
  strcpy(c[22].autor,"Nick Bostrom");
  strcpy(c[22].pclave,"superintelligence");
  c[22].aniop=2014;
  c[22].ran=23;

  strcpy(c[23].nombre,"ALGORITHMS TO LIVE BY: THE COMPUTER SCIENCE OF HUMAN DECISIONS");
  strcpy(c[23].autor,"Brian Christian");
  strcpy(c[23].pclave,"algorithms");
  c[23].aniop=2017;
  c[23].ran=24;

  strcpy(c[24].nombre,"OPERATOS HANDBOOK: RED TEAM + OSINT + BLUE TEAM REFERENCE");
  strcpy(c[24].autor,"Joshua Picolet");
  strcpy(c[24].pclave,"handbook");
  c[24].aniop=2020;
  c[24].ran=25;

  strcpy(c[25].nombre,"SUPERINTELLIGENCE: PATHS, DANGERS, STRATEGIES");
  strcpy(c[25].autor,"Nick Bostrom");
  strcpy(c[25].pclave,"superintelligence");
  c[25].aniop=2014;
  c[25].ran=26;

  strcpy(c[26].nombre,"THE BOOK OF WHY: THE NEW SCIENCE OF CAUSE AND EFFECT");
  strcpy(c[26].autor,"Judea Pearl");
  strcpy(c[26].pclave,"causeeffect");
  c[26].aniop=2020;
  c[26].ran=27;

  strcpy(c[27].nombre,"DEEP MEDICINE: HOW ARTIFICIAL INTELLIGENCE CAN MAKE HEALTHCARE HUMAN AGAIN");
  strcpy(c[27].autor,"Eric Topol");
  strcpy(c[27].pclave,"causeeffect");
  c[27].aniop=2020;
  c[27].ran=28;

  strcpy(c[28].nombre,"DEEP MEDICINE: HOW ARTIFICIAL INTELLIGENCE CAN MAKE HEALTHCARE HUMAN AGAIN");
  strcpy(c[28].autor,"Eric Topol");
  strcpy(c[28].pclave,"causeeffect");
  c[28].aniop=2020;
  c[28].ran=29;

  strcpy(c[29].nombre,"PRINCETON REVIEW AP COMPUTER SCIENCE A PREP, 2021: 4 PRACTICE TESTS + COMPLETE CONTENT REVIEW + STRATEGIES & TECHNIQUES (COLLEGE TEST PREPARATION)");
  strcpy(c[29].autor,"The Princeton Review");
  strcpy(c[29].pclave,"princeton");
  c[29].aniop=2020;
  c[29].ran=30;


  //Libros de Ciencias Sociales
  strcpy(d[0].nombre,"PUBLICATION MANUAL OF THE AMERICAN PSYCHOLOGYCAL ASSOCIATION:7th EDITION,2020 COPYRIGHT");
  strcpy(d[0].autor,"American Psychological association");
  strcpy(d[0].pclave,"manualamerican");
  d[0].aniop=2020;
  d[0].ran=1; 

  strcpy(d[1].nombre,"DBT SKILLS TRAINING HANDOUTS AND AND WORKSSHEETS, SECOND EDITION");
  strcpy(d[1].autor,"Marsha M. Lineahan");
  strcpy(d[1].pclave,"skillstraininghandouts");
  d[1].aniop=2014;
  d[1].ran=2;

  strcpy(d[2].nombre,"ASVAB FOR DUMMIES");
  strcpy(d[2].autor,"Angie Papple Johnston");
  strcpy(d[2].pclave,"asvab");
  d[2].aniop=2003;
  d[2].ran=3;

  strcpy(d[3].nombre,"THE WORLD FOR SALE");
  strcpy(d[3].autor,"Javier Blas");
  strcpy(d[3].pclave,"theworldforsale");
  d[3].aniop=2008;
  d[3].ran=4;

  strcpy(d[4].nombre,"PRINCETON REVIEW AP HUMAN GEOGRAPHY PREMIUM PREP, 2021");
  strcpy(d[4].autor,"The Princeton Review");
  strcpy(d[4].pclave,"aphumangeography");
  d[4].aniop=2020;
  d[4].ran=5;

  strcpy(d[5].nombre,"PUBLICATION MANUAL OF THE AMERICAN PSYCHOLOGYCAL ASSOCIATION:7th EDITION,2020 COPYRIGHT");
  strcpy(d[5].autor,"American Psychological association");
  strcpy(d[5].pclave,"manualamerican");
  d[5].aniop=2019;
  d[5].ran=6;

  strcpy(d[6].nombre,"CONCISE GUIDE TO APA STYLE:SEVENTH EDITION");
  strcpy(d[6].autor,"American Psychological association");
  strcpy(d[6].pclave,"conciseguidetoapa");
  d[6].aniop=2020;
  d[6].ran=7;

  strcpy(d[7].nombre,"NO BAD KIDS: TODDLER DISCIPLINE WITHOUT SHAME");
  strcpy(d[7].autor,"Janet Lansbury");
  strcpy(d[7].pclave,"nobadkids");
  d[7].aniop=2014;
  d[7].ran=8;

  strcpy(d[8].nombre,"ENCYCLOPEDIA OF COUNSELING: MASTER REVIEW AND TUTORIAL FOR THE NATIONAL COUNSELOR EXAMINATION, STATE COUNSELING EXAMS, AND THE  COUNSELOR PREPARATION COMPREHENSIVE EXAMINATION");
  strcpy(d[8].autor,"Howard Rosenthal");
  strcpy(d[8].pclave,"encyclopediacounseling");
  d[8].aniop=2021;
  d[8].ran=9;
  
  strcpy(d[9].nombre,"THE ANXIETY AND WORRY WORKBOOK: THE COGNITIVE BEHAVIORAL SOLUTION");
  strcpy(d[9].autor,"David A. Clark");
  strcpy(d[9].pclave,"anxietyandworry");
  d[9].aniop=2011;
  d[9].ran=10;
  
  strcpy(d[10].nombre,"THE COMPLETE ADULT PSYCHOTHERAPY TREATMENT PLANNER. INCLUDES DSM-5 UPDATES");
  strcpy(d[10].autor,"Arthur E. Jongsma");
  strcpy(d[10].pclave,"adultpsychotherapy");
  d[10].aniop=1995;
  d[10].ran=11;

  strcpy(d[11].nombre,"WORKBOOK FOR THE BODY KEEPS THE SCORE: BRAIN,MIND AND BODY INTHE HEALING OF TRAUMA");
  strcpy(d[11].autor,"Pocket Books");
  strcpy(d[11].pclave,"thebodykeeps");
  d[11].aniop=2014;
  d[11].ran=12;

  strcpy(d[12].nombre,"MAPS OF MEANING: THE ARCHITECTURE OF BELIEF");
  strcpy(d[12].autor,"Jordan B.Peterson");
  strcpy(d[12].pclave,"mapsofmeaning");
  d[12].aniop=1999;
  d[12].ran=13;

  strcpy(d[13].nombre,"CONSTITUTION OF THE UNITED STATES (BOOKS OF AMERICAN WISDOM)");
  strcpy(d[13].autor,"Founding Fathers");
  strcpy(d[13].pclave,"constitutionoftheunited");
  d[13].aniop=1995;
  d[13].ran=14;

  strcpy(d[14].nombre,"POLYVAGAL EXERCISES FOR SAFETY AND CONNECTION: 50 CLIENT-CENTERED PRACTICES (NORTON SERIES ON INTERPERSONAL NEUROBIOLOGY)");
  strcpy(d[14].autor,"Deb Dana");
  strcpy(d[14].pclave,"polyvagalexcecisessafety");
  d[14].aniop=2021;
  d[14].ran=15;

  strcpy(d[15].nombre,"US CITIZENSHIP TEST STUDY GUIDE 2021 AND 2022:NATURALIZATION TEST PREP FOR ALL 100 USCIS CIVICS QUESTIONS AND ANSWERS");
  strcpy(d[15].autor,"Greg Bridges");
  strcpy(d[15].pclave,"uscitizenship");
  d[15].aniop=2021;
  d[15].ran=16;

  strcpy(d[16].nombre,"THE WILLIE LYUNCH LETTER AND THE MAKING OF A SLAVE");
  strcpy(d[16].autor,"Wllie Lynch");
  strcpy(d[16].pclave,"willielynch");
  d[16].aniop=2008;
  d[16].ran=17;

  strcpy(d[17].nombre,"BILL OF RIGHTS: WITH WRITING  THAT FORMED ITS FOUNDATION (BOOKS OF AMERICAN WIDSDOM)");
  strcpy(d[17].autor,"James Madinson");
  strcpy(d[17].pclave,"billofrights");
  d[17].aniop=2006;
  d[17].ran=18;

  strcpy(d[18].nombre,"THE OUT OF SYNC CHILD: RECOGNIZING AND COPING WITH SENSORY PREOCESSING DISORDER");
  strcpy(d[18].autor,"Carol Kranowitz");
  strcpy(d[18].pclave,"outsyngchild");
  d[18].aniop=1998;
  d[18].ran=19;

  strcpy(d[19].nombre,"EYE MOVEMENT DESENSITIZATION AND REPROCESSING");
  strcpy(d[19].autor,"Francine Shapiro");
  strcpy(d[19].pclave,"eyemovenment");
  d[19].aniop=2017;
  d[19].ran=20;

  strcpy(d[20].nombre,"AP HUMAN GEOGRAPHY PREP PLUS 2020 & 2021: 3 PRACTICE TEST+ STUDY PLANS+REVIEW+ONLINE (KPLAN TEST PREP)");
  strcpy(d[20].autor,"Kaplan Test Prep");
  strcpy(d[20].pclave,"aphumangeographyplus");
  d[20].aniop=2021;
  d[20].ran=21;

  strcpy(d[21].nombre,"DBT SKILLS TRAINING MANUAL ,SECOND  EDITION");
  strcpy(d[21].autor,"Marsha M.Linehan");
  strcpy(d[21].pclave,"skillstrainingmanual");
  d[21].aniop=2017;
  d[21].ran=22;

  strcpy(d[22].nombre,"ATOMIC HABITS: AN EASY & PROVEN WAY TO BUILD GOOD HABITS AND BREAK BAD ONES");
  strcpy(d[22].autor,"James Clear");
  strcpy(d[22].pclave,"atomichabits");
  d[22].aniop=2018;
  d[22].ran=23;

  strcpy(d[23].nombre,"HOW THE SOUTH WON THE CIVIL WAR:OLIGARCHY, DEMOCRACY, AND THE CONTINUING FIGHT FOR THE SOUL OF AMERICAN");
  strcpy(d[23].autor,"Heather Cox Richardson");
  strcpy(d[23].pclave,"howsouthwon");
  d[23].aniop=2021;
  d[23].ran=24;

  strcpy(d[24].nombre,"DESTRUCTION OF BLACK CIVILIZATION: GREAT ISSUES OF A RACE FROM 4500 B.C. TO 2000 A.D.");
  strcpy(d[24].autor,"Chancellor Williams");
  strcpy(d[24].pclave,"destructionofblack");
  d[24].aniop=2015;
  d[24].ran=25;

  strcpy(d[25].nombre,"INCIDENTS IN THE LIFE OF A SLAVE GIRL");
  strcpy(d[25].autor,"Harriet Jacobs");
  strcpy(d[25].pclave,"incidentslifeslave");
  d[25].aniop=2012;
  d[25].ran=26;

  strcpy(d[26].nombre,"INCIDENTS IN THE LIFE OF A SLAVE GIRL");
  strcpy(d[26].autor,"Harriet Jacobs");
  strcpy(d[26].pclave,"incidentslifeslave");
  d[26].aniop=2012;
  d[26].ran=27;

  strcpy(d[27].nombre,"PRINCETON REVIEW AP U.S GOVERNMENT & POLITICS PREMIUM PREP, 2021: 6 PRACTICE TEST+ COMPLETE CONTENT  REVIEW+STRATEGIES & TECHNIQUES");
  strcpy(d[27].autor,"The Princeton Review");
  strcpy(d[27].pclave,"princetongovernment");
  d[27].aniop=2021;
  d[27].ran=28;

  strcpy(d[28].nombre,"ONE DAY AT A TIME IN AL-ANON");
  strcpy(d[28].autor,"Al-Anon Family Group Head Inc");
  strcpy(d[28].pclave,"onedaytime");
  d[28].aniop=2021;
  d[28].ran=29;

  strcpy(d[29].nombre,"COUNSELING THE CULTURALLY DIVERSE: THEORY AND PRACTICE.");
  strcpy(d[29].autor,"Derald Wing Sue");
  strcpy(d[29].pclave,"counselingculturallydiverse");
  d[29].aniop=1981;
  d[29].ran=30;
   

  //Libros de ensayo
  strcpy(e[0].nombre,"UNA GUÍA SOBRE EL ARTE DE PERDERSE");
  strcpy(e[0].autor,"Rebeca Solnit");
  strcpy(e[0].pclave,"arteperderse");
  e[0].aniop=2005;
  e[0].ran=1;

  strcpy(e[1].nombre,"EL INFINITO EN UN JUNCO: LA INVENCIÓN DE LOS LIBROS EN EL MUNDO ANTIGUO (BIBLIOTECA DE ENSAYO / SERIE MAYOR n°105");
  strcpy(e[1].autor,"Irene Vallejo");
  strcpy(e[1].pclave,"infinitojunco");
  e[1].aniop=2021;
  e[1].ran=2;

  strcpy(e[2].nombre,"EPLOSIÓN DE DESEO:(6 TOMOS EN 1) LA COLECCIÓN COMPLETA DE LIBROS DE NOVELAS ROMÁNTICA EN ESPAÑOL. UNA NOVELA ROMÁNTICA DE MERCEDES FRANCO");
  strcpy(e[2].autor,"Mercedes Franco");
  strcpy(e[2].pclave,"explosiondeseo");
  e[2].aniop=2020;
  e[2].ran=3;

  strcpy(e[3].nombre,"LOS HOMBRES ME EXPLICAN COSAS (ESPECIALES)");
  strcpy(e[3].autor,"Rebeca Solnit");
  strcpy(e[3].pclave,"hombresesplican");
  e[3].aniop=2014;
  e[3].ran=4;

  strcpy(e[4].nombre,"YOGA(PANORAMA DE NARRATIVAS n° 1042)");
  strcpy(e[4].autor,"Emmanuel Cerrére");
  strcpy(e[4].pclave,"yoga");
  e[4].aniop=2021;
  e[4].ran=5;
 
  strcpy(e[5].nombre,"YOGA(PANORAMA DE NARRATIVAS n° 1042)");
  strcpy(e[5].autor,"Emmanuel Cerrére");
  strcpy(e[5].pclave,"yoga");
  e[5].aniop=2021;
  e[5].ran=6;

  strcpy(e[6].nombre,"MUJERES INVISIBLES PARA LA MEDICINA (ENSAYO)");
  strcpy(e[6].autor,"Carme Valls Llobet");
  strcpy(e[6].pclave,"invisiblesmedicina");
  e[6].aniop=2020;
  e[6].ran=7;
  
  strcpy(e[7].nombre,"EL PODER DEL MITO");
  strcpy(e[7].autor,"Joseph Campbell");
  strcpy(e[7].pclave,"podermito");
  e[7].aniop=1988;
  e[7].ran=8;

  strcpy(e[8].nombre,"DESPOJOS: SOBRE EL MATRIMINIO Y LA SEPARACIÓN");
  strcpy(e[8].autor,"Rachel Cusk");
  strcpy(e[8].pclave,"despojos");
  e[8].aniop=2020;
  e[8].ran=9;

  strcpy(e[9].nombre,"MANUAL DE VIDA: PASAJES ESCOGIDOS");
  strcpy(e[9].autor,"Epicteto");
  strcpy(e[9].pclave,"manualvida");
  e[9].aniop=2014;
  e[9].ran=10;

  strcpy(e[10].nombre,"MANIFIESTO POR LA LECTURA (CATÁLOGOS Y EDICIONES ESPECIALES)");
  strcpy(e[10].autor,"Irene Vallejo");
  strcpy(e[10].pclave,"manifiestolectura");
  e[10].aniop=2020;
  e[10].ran=11;
  
  strcpy(e[11].nombre,"PENSAMIENTOS (DOCE UVAS n° 156)");
  strcpy(e[11].autor,"Blaise Pascal");
  strcpy(e[11].pclave,"pensamientos");
  e[11].aniop=2014;
  e[11].ran=12;

  strcpy(e[12].nombre,"IDENTIDADES ASESINAS (EL LIBRO DE BOLSILLO - BIBLIOTECAS DE AUTOR- BIBLIOTECA MAALOUF n° 3101)");
  strcpy(e[12].autor,"Amin Maalouf");
  strcpy(e[12].pclave,"identidadesasesinas");
  e[12].aniop=2012;
  e[12].ran=13;

  strcpy(e[13].nombre,"UN PLANETA DE VIRUS (ENSAYO)");
  strcpy(e[13].autor,"Carl Zimmer");
  strcpy(e[13].pclave,"planetavirus");
  e[13].aniop=2021;
  e[13].ran=14;

  strcpy(e[14].nombre,"SOBRE EL COMBATE: LA PSICOLOGÍA Y FISIOLOGÍA DEL CONFLICTO LETAL EN LA GUERRA Y EN LA PAZ");
  strcpy(e[14].autor,"Dave Grossman");
  strcpy(e[14].pclave,"sobrecombate");
  e[14].aniop=2020;
  e[14].ran=15;

  strcpy(e[15].nombre,"EL AGENTE OSCURO: MEMORIAS DE UN ESPÍA INFLITRADO POR EL CNI (RÚSTICA ENSAYO)");
  strcpy(e[15].autor,"Anonimo Anonimo");
  strcpy(e[15].pclave,"agenteoscuro");
  e[15].aniop=2020;
  e[15].ran=16;

  strcpy(e[16].nombre,"LA BRUJA DEBE MORIR: DE QUÉ MODO LOS CUENTOS DE HADAS INFLUYEN EN LOS NIÑOS");
  strcpy(e[16].autor,"Sheldon Cashdan");
  strcpy(e[16].pclave,"brujamorir");
  e[16].aniop=2017;
  e[16].ran=17;

  strcpy(e[17].nombre,"LA VIDA EN CUATRO LETRAS: CLAVES PARA ENTENDER LA DIVERSIDAD, LA ENFERMEDAD Y LA FELICIDAD");
  strcpy(e[17].autor,"Carlos López Otín");
  strcpy(e[17].pclave,"vidaletras");
  e[17].aniop=2019;
  e[17].ran=18;

  strcpy(e[18].nombre,"CLEOPATRA: SOY FUEGO Y AIRE (PERSONAJES DE SHAKESPEARE n° 2)");
  strcpy(e[18].autor,"Harold Bloom");
  strcpy(e[18].pclave,"cleopatra");
  e[18].aniop=2021;
  e[18].ran=19;

  strcpy(e[19].nombre,"EL SIGLO DEL POPULISMO: HISTORIA, TEORÍA Y CRÍTICA (EBOOK)");
  strcpy(e[19].autor,"Pierre Rosanvallon");
  strcpy(e[19].pclave,"populismo");
  e[19].aniop=2020;
  e[19].ran=20;

  strcpy(e[20].nombre,"LAS REGLAS DEL CONTAGIO (ENSAYO)");
  strcpy(e[20].autor,"Adam Kucharski");
  strcpy(e[20].pclave,"reglascontagio");
  e[20].aniop=2020;
  e[20].ran=21;

  strcpy(e[21].nombre,"UNA HABITACIÓN PROPIA");
  strcpy(e[21].autor,"Virginia Woolf");
  strcpy(e[21].pclave,"habitaciónpropia");
  e[21].aniop=1929;
  e[21].ran=22;

  strcpy(e[22].nombre,"L'ART DE FER CLASSE (LLIBRES ANAGRAMA BOOK 77)");
  strcpy(e[22].autor,"Daniel Cassany");
  strcpy(e[22].pclave,"lart");
  e[22].aniop=2021;
  e[22].ran=23;

  strcpy(e[23].nombre,"EL UNIVERSO DE DICKENS: UNA LECCIÓN DE HUMANIDAD (LITERATURA Y CIENCIA DE LA LITERATURA)");
  strcpy(e[23].autor,"Mariano Fazio Fernández");
  strcpy(e[23].pclave,"dickens");
  e[23].aniop=2015;
  e[23].ran=24;

  strcpy(e[24].nombre,"ENDURANCE: LA PRISIÓN BLANCA: EL LEGENDARIO VIAJE DE SHACKLETON AL POLO SUR (ENSAYO)");
  strcpy(e[24].autor,"Alfred Lansing");
  strcpy(e[24].pclave,"endurance");
  e[24].aniop=2019;
  e[24].ran=25;

  strcpy(e[25].nombre,"CAMINAR");
  strcpy(e[25].autor,"Henry David Thoreau");
  strcpy(e[25].pclave,"caminar");
  e[25].aniop=1998;
  e[25].ran=26;

  strcpy(e[26].nombre,"EL ARTE DE DAR CLASE (ARGUMENTOS n° 553)");
  strcpy(e[26].autor,"Daniel Cassany");
  strcpy(e[26].pclave,"arteclase");
  e[26].aniop=2021;
  e[26].ran=27;

  strcpy(e[27].nombre,"GRANDES GRANJAS, GRANDES GRIPES (ENSAYO)");
  strcpy(e[27].autor,"Rob Wallace");
  strcpy(e[27].pclave,"granjasgripes");
  e[27].aniop=2020;
  e[27].ran=28;

  strcpy(e[28].nombre,"DECÁLOGO DEL PERFECTO CUENTISTA (VERSIÓN ACTUALIZADA)");
  strcpy(e[28].autor,"Horacio Quiroga");
  strcpy(e[28].pclave,"decalogo");
  e[28].aniop=1927;
  e[28].ran=29;

  strcpy(e[29].nombre,"YA SENTARÁS CABEZA: CUANDO FUIMOS PERIODISTAS (2006-2011)(LIBROS DEL ASTEROIDE n°243)");
  strcpy(e[29].autor,"Ignacio Peyró");
  strcpy(e[29].pclave,"sentarascabeza");
  e[29].aniop=2020;
  e[29].ran=30;

  for (int i=0; i<30; i++)
  {
    printf("\nNombre del libro: %s",c[i].nombre);
    printf("\nAutor: %s",c[i].autor);
    printf("\nPalabra clave: %s",c[i].pclave);
    printf("\nAnio de publicación: %i",c[i].aniop);
    printf("\nPosicion en el ranking: %i",c[i].ran);
    printf("\n");
  }
  return 0;
}