// SClass.cxx:

#include "SClass.h"
#include "TROOT.h"
#include "TFile.h"
#include "TH1F.h"

//stdlib include(s)
#include "MinBiasTree.h"
#include <stddef.h> 
#include <stdio.h>
#include <stdlib.h>
#include <ostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>



SClass* SClass::gMBT =  0;

SClass* SClass::getInstance()
{
  if (!gMBT) gMBT=new SClass();
  
 return gMBT;
}



TH1F *hist = new TH1F("hist", "Histogram",7,1,7);

ClassImp(SClass);
void SClass::Fill_hist()
{
 MinBiasTree  *evt = MinBiasTree::getInstance();
hist->Fill(evt->EventNumber ); 
 
}



void SClass::Draw_hist()
{
  hist->Print(); 
 
}


