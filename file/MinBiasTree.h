//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Oct  7 13:42:15 2022 by ROOT version 6.14/00
// from TTree MinBiasTree/MinBiasTree
// found on file: NTUP_MINBIAS.01304347._003143.root
//////////////////////////////////////////////////////////

#ifndef MinBiasTree_h
#define MinBiasTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "vector"
#include "vector"

using namespace std;

class MinBiasTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   UInt_t          RunNumber;
   UInt_t          EventNumber;
   UInt_t          timestamp;
   UInt_t          timestamp_ns;
   UInt_t          lbn;
   UInt_t          bcid;
   UInt_t          detmask0;
   UInt_t          detmask1;
   Float_t         actualIntPerXing;
   Float_t         averageIntPerXing;
   UInt_t          pixelFlags;
   UInt_t          sctFlags;
   UInt_t          trtFlags;
   UInt_t          larFlags;
   UInt_t          tileFlags;
   UInt_t          muonFlags;
   UInt_t          fwdFlags;
   UInt_t          coreFlags;
   UInt_t          pixelError;
   UInt_t          sctError;
   UInt_t          trtError;
   UInt_t          larError;
   UInt_t          tileError;
   UInt_t          muonError;
   UInt_t          fwdError;
   UInt_t          coreError;
   Bool_t          streamDecision_Egamma;
   Bool_t          streamDecision_Muons;
   Bool_t          streamDecision_JetTauEtmiss;
   UInt_t          l1id;
   Bool_t          isSimulation;
   Bool_t          isCalibration;
   Bool_t          isTestBeam;
   Int_t           trk_n;
   vector<float>   *trk_d0;
   vector<float>   *trk_z0;
   vector<float>   *trk_phi;
   vector<float>   *trk_theta;
   vector<float>   *trk_qoverp;
   vector<float>   *trk_pt;
   vector<float>   *trk_eta;
   vector<float>   *trk_err_d0;
   vector<float>   *trk_err_z0;
   vector<float>   *trk_err_phi;
   vector<float>   *trk_err_theta;
   vector<float>   *trk_err_qoverp;
   vector<float>   *trk_cov_d0_z0;
   vector<float>   *trk_cov_d0_phi;
   vector<float>   *trk_cov_d0_theta;
   vector<float>   *trk_cov_d0_qoverp;
   vector<float>   *trk_cov_z0_phi;
   vector<float>   *trk_cov_z0_theta;
   vector<float>   *trk_cov_z0_qoverp;
   vector<float>   *trk_cov_phi_theta;
   vector<float>   *trk_cov_phi_qoverp;
   vector<float>   *trk_cov_theta_qoverp;
   vector<float>   *trk_d0_wrtPV;
   vector<float>   *trk_z0_wrtPV;
   vector<float>   *trk_phi_wrtPV;
   vector<float>   *trk_err_d0_wrtPV;
   vector<float>   *trk_err_z0_wrtPV;
   vector<float>   *trk_err_phi_wrtPV;
   vector<float>   *trk_err_theta_wrtPV;
   vector<float>   *trk_err_qoverp_wrtPV;
   vector<float>   *trk_cov_d0_z0_wrtPV;
   vector<float>   *trk_cov_d0_phi_wrtPV;
   vector<float>   *trk_cov_d0_theta_wrtPV;
   vector<float>   *trk_cov_d0_qoverp_wrtPV;
   vector<float>   *trk_cov_z0_phi_wrtPV;
   vector<float>   *trk_cov_z0_theta_wrtPV;
   vector<float>   *trk_cov_z0_qoverp_wrtPV;
   vector<float>   *trk_cov_phi_theta_wrtPV;
   vector<float>   *trk_cov_phi_qoverp_wrtPV;
   vector<float>   *trk_cov_theta_qoverp_wrtPV;
   vector<float>   *trk_d0_wrtBS;
   vector<float>   *trk_z0_wrtBS;
   vector<float>   *trk_phi_wrtBS;
   vector<float>   *trk_err_d0_wrtBS;
   vector<float>   *trk_err_z0_wrtBS;
   vector<float>   *trk_err_phi_wrtBS;
   vector<float>   *trk_err_theta_wrtBS;
   vector<float>   *trk_err_qoverp_wrtBS;
   vector<float>   *trk_cov_d0_z0_wrtBS;
   vector<float>   *trk_cov_d0_phi_wrtBS;
   vector<float>   *trk_cov_d0_theta_wrtBS;
   vector<float>   *trk_cov_d0_qoverp_wrtBS;
   vector<float>   *trk_cov_z0_phi_wrtBS;
   vector<float>   *trk_cov_z0_theta_wrtBS;
   vector<float>   *trk_cov_z0_qoverp_wrtBS;
   vector<float>   *trk_cov_phi_theta_wrtBS;
   vector<float>   *trk_cov_phi_qoverp_wrtBS;
   vector<float>   *trk_cov_theta_qoverp_wrtBS;
   vector<float>   *trk_d0_wrtBL;
   vector<float>   *trk_z0_wrtBL;
   vector<float>   *trk_phi_wrtBL;
   vector<float>   *trk_d0_err_wrtBL;
   vector<float>   *trk_z0_err_wrtBL;
   vector<float>   *trk_phi_err_wrtBL;
   vector<float>   *trk_theta_err_wrtBL;
   vector<float>   *trk_qoverp_err_wrtBL;
   vector<float>   *trk_d0_z0_err_wrtBL;
   vector<float>   *trk_d0_phi_err_wrtBL;
   vector<float>   *trk_d0_theta_err_wrtBL;
   vector<float>   *trk_d0_qoverp_err_wrtBL;
   vector<float>   *trk_z0_phi_err_wrtBL;
   vector<float>   *trk_z0_theta_err_wrtBL;
   vector<float>   *trk_z0_qoverp_err_wrtBL;
   vector<float>   *trk_phi_theta_err_wrtBL;
   vector<float>   *trk_phi_qoverp_err_wrtBL;
   vector<float>   *trk_theta_qoverp_err_wrtBL;
   vector<float>   *trk_chi2;
   vector<int>     *trk_ndof;
   vector<int>     *trk_nBLHits;
   vector<int>     *trk_nPixHits;
   vector<int>     *trk_nSCTHits;
   vector<int>     *trk_nTRTHits;
   vector<int>     *trk_nTRTHighTHits;
   vector<int>     *trk_nTRTXenonHits;
   vector<int>     *trk_nPixHoles;
   vector<int>     *trk_nSCTHoles;
   vector<int>     *trk_nTRTHoles;
   vector<int>     *trk_nPixelDeadSensors;
   vector<int>     *trk_nSCTDeadSensors;
   vector<int>     *trk_nBLSharedHits;
   vector<int>     *trk_nPixSharedHits;
   vector<int>     *trk_nSCTSharedHits;
   vector<int>     *trk_nBLayerSplitHits;
   vector<int>     *trk_nPixSplitHits;
   vector<int>     *trk_nBLayerOutliers;
   vector<int>     *trk_nPixelOutliers;
   vector<int>     *trk_nSCTOutliers;
   vector<int>     *trk_nTRTOutliers;
   vector<int>     *trk_nTRTHighTOutliers;
   vector<int>     *trk_expectBLayerHit;
   vector<int>     *trk_nHits;
   vector<int>     *trk_nHoles;
   vector<int>     *trk_hitPattern;
   vector<float>   *trk_pixeldEdx;
   vector<int>     *trk_nGoodHitsPixeldEdx;
   vector<float>   *trk_massPixeldEdx;
   vector<vector<float> > *trk_likelihoodsPixeldEdx;
   vector<int>     *trk_fitter;
   vector<int>     *trk_patternReco1;
   vector<int>     *trk_patternReco2;
   vector<int>     *trk_trackProperties;
   vector<int>     *trk_particleHypothesis;
   vector<vector<float> > *trk_blayerPrediction_x;
   vector<vector<float> > *trk_blayerPrediction_y;
   vector<vector<float> > *trk_blayerPrediction_z;
   vector<vector<float> > *trk_blayerPrediction_locX;
   vector<vector<float> > *trk_blayerPrediction_locY;
   vector<vector<float> > *trk_blayerPrediction_err_locX;
   vector<vector<float> > *trk_blayerPrediction_err_locY;
   vector<vector<float> > *trk_blayerPrediction_etaDistToEdge;
   vector<vector<float> > *trk_blayerPrediction_phiDistToEdge;
   vector<vector<unsigned int> > *trk_blayerPrediction_detElementId;
   vector<vector<int> > *trk_blayerPrediction_row;
   vector<vector<int> > *trk_blayerPrediction_col;
   vector<vector<int> > *trk_blayerPrediction_type;
   vector<int>     *trk_Pixel_hit_n;
   vector<vector<unsigned int> > *trk_Pixel_hit_id;
   vector<vector<unsigned int> > *trk_Pixel_hit_detElementId;
   vector<vector<int> > *trk_Pixel_hit_detType;
   vector<vector<int> > *trk_Pixel_hit_bec;
   vector<vector<int> > *trk_Pixel_hit_layer;
   vector<vector<float> > *trk_Pixel_hit_charge;
   vector<vector<int> > *trk_Pixel_hit_sizePhi;
   vector<vector<int> > *trk_Pixel_hit_sizeZ;
   vector<vector<int> > *trk_Pixel_hit_size;
   vector<vector<int> > *trk_Pixel_hit_isFake;
   vector<vector<int> > *trk_Pixel_hit_isGanged;
   vector<vector<int> > *trk_Pixel_hit_isSplit;
   vector<vector<float> > *trk_Pixel_hit_splitProb1;
   vector<vector<float> > *trk_Pixel_hit_splitProb2;
   vector<vector<int> > *trk_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trk_Pixel_hit_locX;
   vector<vector<float> > *trk_Pixel_hit_locY;
   vector<vector<float> > *trk_Pixel_hit_incidencePhi;
   vector<vector<float> > *trk_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trk_Pixel_hit_err_locX;
   vector<vector<float> > *trk_Pixel_hit_err_locY;
   vector<vector<float> > *trk_Pixel_hit_cov_locXY;
   vector<vector<float> > *trk_Pixel_hit_x;
   vector<vector<float> > *trk_Pixel_hit_y;
   vector<vector<float> > *trk_Pixel_hit_z;
   vector<vector<float> > *trk_Pixel_hit_trkLocX;
   vector<vector<float> > *trk_Pixel_hit_trkLocY;
   vector<vector<float> > *trk_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trk_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trk_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trk_Pixel_hit_chi2;
   vector<vector<int> > *trk_Pixel_hit_ndof;
   vector<int>     *trk_SCT_hit_n;
   vector<vector<unsigned int> > *trk_SCT_hit_id;
   vector<vector<unsigned int> > *trk_SCT_hit_detElementId;
   vector<vector<int> > *trk_SCT_hit_detType;
   vector<vector<int> > *trk_SCT_hit_bec;
   vector<vector<int> > *trk_SCT_hit_layer;
   vector<vector<int> > *trk_SCT_hit_sizePhi;
   vector<vector<int> > *trk_SCT_hit_isCompetingRIO;
   vector<vector<float> > *trk_SCT_hit_locX;
   vector<vector<float> > *trk_SCT_hit_locY;
   vector<vector<float> > *trk_SCT_hit_incidencePhi;
   vector<vector<float> > *trk_SCT_hit_incidenceTheta;
   vector<vector<float> > *trk_SCT_hit_err_locX;
   vector<vector<float> > *trk_SCT_hit_err_locY;
   vector<vector<float> > *trk_SCT_hit_cov_locXY;
   vector<vector<float> > *trk_SCT_hit_x;
   vector<vector<float> > *trk_SCT_hit_y;
   vector<vector<float> > *trk_SCT_hit_z;
   vector<vector<float> > *trk_SCT_hit_trkLocX;
   vector<vector<float> > *trk_SCT_hit_trkLocY;
   vector<vector<float> > *trk_SCT_hit_err_trkLocX;
   vector<vector<float> > *trk_SCT_hit_err_trkLocY;
   vector<vector<float> > *trk_SCT_hit_cov_trkLocXY;
   vector<vector<float> > *trk_SCT_hit_chi2;
   vector<vector<int> > *trk_SCT_hit_ndof;
   vector<int>     *trk_TRT_hit_n;
   vector<vector<unsigned int> > *trk_TRT_hit_id;
   vector<vector<unsigned int> > *trk_TRT_hit_detElementId;
   vector<vector<int> > *trk_TRT_hit_detType;
   vector<vector<int> > *trk_TRT_hit_bec;
   vector<vector<int> > *trk_TRT_hit_layer;
   vector<vector<int> > *trk_TRT_hit_isCompetingRIO;
   vector<vector<float> > *trk_TRT_hit_locR;
   vector<vector<float> > *trk_TRT_hit_err_locR;
   vector<vector<float> > *trk_TRT_hit_trkLocR;
   vector<vector<float> > *trk_TRT_hit_trkLocPhi;
   vector<vector<float> > *trk_TRT_hit_err_trkLocR;
   vector<vector<float> > *trk_TRT_hit_err_trkLocPhi;
   vector<vector<float> > *trk_TRT_hit_cov_trkLocRPhi;
   vector<vector<float> > *trk_TRT_hit_TOT;
   vector<vector<int> > *trk_TRT_hit_highLevel;
   vector<vector<float> > *trk_TRT_hit_trailingEdge;
   vector<vector<float> > *trk_TRT_hit_chi2;
   vector<vector<int> > *trk_TRT_hit_ndof;
   vector<int>     *trk_Pixel_outlier_n;
   vector<vector<unsigned int> > *trk_Pixel_outlier_id;
   vector<vector<unsigned int> > *trk_Pixel_outlier_detElementId;
   vector<vector<int> > *trk_Pixel_outlier_detType;
   vector<vector<int> > *trk_Pixel_outlier_bec;
   vector<vector<int> > *trk_Pixel_outlier_layer;
   vector<vector<float> > *trk_Pixel_outlier_charge;
   vector<vector<int> > *trk_Pixel_outlier_sizePhi;
   vector<vector<int> > *trk_Pixel_outlier_sizeZ;
   vector<vector<int> > *trk_Pixel_outlier_size;
   vector<vector<int> > *trk_Pixel_outlier_isFake;
   vector<vector<int> > *trk_Pixel_outlier_isGanged;
   vector<vector<int> > *trk_Pixel_outlier_isSplit;
   vector<vector<float> > *trk_Pixel_outlier_splitProb1;
   vector<vector<float> > *trk_Pixel_outlier_splitProb2;
   vector<vector<int> > *trk_Pixel_outlier_isCompetingRIO;
   vector<vector<float> > *trk_Pixel_outlier_locX;
   vector<vector<float> > *trk_Pixel_outlier_locY;
   vector<vector<float> > *trk_Pixel_outlier_incidencePhi;
   vector<vector<float> > *trk_Pixel_outlier_incidenceTheta;
   vector<vector<float> > *trk_Pixel_outlier_err_locX;
   vector<vector<float> > *trk_Pixel_outlier_err_locY;
   vector<vector<float> > *trk_Pixel_outlier_cov_locXY;
   vector<vector<float> > *trk_Pixel_outlier_x;
   vector<vector<float> > *trk_Pixel_outlier_y;
   vector<vector<float> > *trk_Pixel_outlier_z;
   vector<vector<float> > *trk_Pixel_outlier_trkLocX;
   vector<vector<float> > *trk_Pixel_outlier_trkLocY;
   vector<vector<float> > *trk_Pixel_outlier_err_trkLocX;
   vector<vector<float> > *trk_Pixel_outlier_err_trkLocY;
   vector<vector<float> > *trk_Pixel_outlier_cov_trkLocXY;
   vector<vector<float> > *trk_Pixel_outlier_chi2;
   vector<vector<int> > *trk_Pixel_outlier_ndof;
   vector<int>     *trk_SCT_outlier_n;
   vector<vector<unsigned int> > *trk_SCT_outlier_id;
   vector<vector<unsigned int> > *trk_SCT_outlier_detElementId;
   vector<vector<int> > *trk_SCT_outlier_detType;
   vector<vector<int> > *trk_SCT_outlier_bec;
   vector<vector<int> > *trk_SCT_outlier_layer;
   vector<vector<int> > *trk_SCT_outlier_sizePhi;
   vector<vector<int> > *trk_SCT_outlier_isCompetingRIO;
   vector<vector<float> > *trk_SCT_outlier_locX;
   vector<vector<float> > *trk_SCT_outlier_locY;
   vector<vector<float> > *trk_SCT_outlier_incidencePhi;
   vector<vector<float> > *trk_SCT_outlier_incidenceTheta;
   vector<vector<float> > *trk_SCT_outlier_err_locX;
   vector<vector<float> > *trk_SCT_outlier_err_locY;
   vector<vector<float> > *trk_SCT_outlier_cov_locXY;
   vector<vector<float> > *trk_SCT_outlier_x;
   vector<vector<float> > *trk_SCT_outlier_y;
   vector<vector<float> > *trk_SCT_outlier_z;
   vector<vector<float> > *trk_SCT_outlier_trkLocX;
   vector<vector<float> > *trk_SCT_outlier_trkLocY;
   vector<vector<float> > *trk_SCT_outlier_err_trkLocX;
   vector<vector<float> > *trk_SCT_outlier_err_trkLocY;
   vector<vector<float> > *trk_SCT_outlier_cov_trkLocXY;
   vector<vector<float> > *trk_SCT_outlier_chi2;
   vector<vector<int> > *trk_SCT_outlier_ndof;
   vector<int>     *trk_TRT_outlier_n;
   vector<vector<unsigned int> > *trk_TRT_outlier_id;
   vector<vector<unsigned int> > *trk_TRT_outlier_detElementId;
   vector<vector<int> > *trk_TRT_outlier_detType;
   vector<vector<int> > *trk_TRT_outlier_bec;
   vector<vector<int> > *trk_TRT_outlier_layer;
   vector<vector<int> > *trk_TRT_outlier_isCompetingRIO;
   vector<vector<float> > *trk_TRT_outlier_locR;
   vector<vector<float> > *trk_TRT_outlier_err_locR;
   vector<vector<float> > *trk_TRT_outlier_trkLocR;
   vector<vector<float> > *trk_TRT_outlier_trkLocPhi;
   vector<vector<float> > *trk_TRT_outlier_err_trkLocR;
   vector<vector<float> > *trk_TRT_outlier_err_trkLocPhi;
   vector<vector<float> > *trk_TRT_outlier_cov_trkLocRPhi;
   vector<vector<float> > *trk_TRT_outlier_TOT;
   vector<vector<int> > *trk_TRT_outlier_highLevel;
   vector<vector<float> > *trk_TRT_outlier_trailingEdge;
   vector<vector<float> > *trk_TRT_outlier_chi2;
   vector<vector<int> > *trk_TRT_outlier_ndof;
   vector<int>     *trk_Pixel_hole_n;
   vector<vector<unsigned int> > *trk_Pixel_hole_detElementId;
   vector<vector<int> > *trk_Pixel_hole_bec;
   vector<vector<int> > *trk_Pixel_hole_layer;
   vector<vector<float> > *trk_Pixel_hole_trkLocX;
   vector<vector<float> > *trk_Pixel_hole_trkLocY;
   vector<vector<float> > *trk_Pixel_hole_err_trkLocX;
   vector<vector<float> > *trk_Pixel_hole_err_trkLocY;
   vector<vector<float> > *trk_Pixel_hole_cov_trkLocXY;
   vector<int>     *trk_SCT_hole_n;
   vector<vector<unsigned int> > *trk_SCT_hole_detElementId;
   vector<vector<int> > *trk_SCT_hole_bec;
   vector<vector<int> > *trk_SCT_hole_layer;
   vector<vector<float> > *trk_SCT_hole_trkLocX;
   vector<vector<float> > *trk_SCT_hole_trkLocY;
   vector<vector<float> > *trk_SCT_hole_err_trkLocX;
   vector<vector<float> > *trk_SCT_hole_err_trkLocY;
   vector<vector<float> > *trk_SCT_hole_cov_trkLocXY;
   vector<int>     *trk_TRT_hole_n;
   vector<vector<unsigned int> > *trk_TRT_hole_detElementId;
   vector<vector<int> > *trk_TRT_hole_bec;
   vector<vector<int> > *trk_TRT_hole_layer;
   vector<vector<float> > *trk_TRT_hole_trkLocR;
   vector<vector<float> > *trk_TRT_hole_trkLocPhi;
   vector<vector<float> > *trk_TRT_hole_err_trkLocR;
   vector<vector<float> > *trk_TRT_hole_err_trkLocPhi;
   vector<vector<float> > *trk_TRT_hole_cov_trkLocRPhi;
   Int_t           vx_n;
   vector<float>   *vx_x;
   vector<float>   *vx_y;
   vector<float>   *vx_z;
   vector<float>   *vx_err_x;
   vector<float>   *vx_err_y;
   vector<float>   *vx_err_z;
   vector<float>   *vx_cov_xy;
   vector<float>   *vx_cov_xz;
   vector<float>   *vx_cov_yz;
   vector<int>     *vx_type;
   vector<float>   *vx_chi2;
   vector<int>     *vx_ndof;
   vector<float>   *vx_px;
   vector<float>   *vx_py;
   vector<float>   *vx_pz;
   vector<float>   *vx_E;
   vector<float>   *vx_m;
   vector<int>     *vx_nTracks;
   vector<float>   *vx_sumPt;
   vector<vector<float> > *vx_trk_weight;
   vector<int>     *vx_trk_n;
   vector<vector<int> > *vx_trk_index;
   Float_t         beamSpot_x;
   Float_t         beamSpot_y;
   Float_t         beamSpot_z;
   Float_t         beamSpot_sigma_x;
   Float_t         beamSpot_sigma_y;
   Float_t         beamSpot_sigma_z;
   Float_t         beamSpot_tilt_x;
   Float_t         beamSpot_tilt_y;
   Int_t           unassocHits_nPixel;
   Int_t           unassocHits_nBlayer;
   Int_t           unassocHits_nPixelBarrel;
   Int_t           unassocHits_nPixelEndCapA;
   Int_t           unassocHits_nPixelEndCapC;
   Int_t           unassocHits_nSCT;
   Int_t           unassocHits_nSCTBarrel;
   Int_t           unassocHits_nSCTEndCapA;
   Int_t           unassocHits_nSCTEndCapC;
   Int_t           unassocHits_nTRT;
   Int_t           unassocHits_nTRTBarrel;
   Int_t           unassocHits_nTRTEndCapA;
   Int_t           unassocHits_nTRTEndCapC;
   UInt_t          ctpRDO_nBC;
   UInt_t          ctpRDO_lvl1aBC;
   UInt_t          ctpRDO_time_s;
   UInt_t          ctpRDO_time_ns;
   vector<unsigned int> *ctpRDO_pit;
   vector<unsigned int> *ctpRDO_tbp;
   vector<unsigned int> *ctpRDO_tap;
   vector<unsigned int> *ctpRDO_tav;
   UInt_t          ctp_decisionTypeWord;
   vector<string>  *ctp_decisionItems;
   vector<unsigned int> *ctp_decisionWords;
   UInt_t          ctp_nDecisionItems;
   Int_t           mbts_n;
   vector<float>   *mbts_energy;
   vector<float>   *mbts_time;
   vector<float>   *mbts_quality;
   vector<int>     *mbts_type;
   vector<int>     *mbts_module;
   vector<int>     *mbts_channel;
   vector<unsigned int> *trig_L1_TAV;
   vector<short>   *trig_L2_passedPhysics;
   vector<short>   *trig_EF_passedPhysics;
   vector<unsigned int> *trig_L1_TBP;
   vector<unsigned int> *trig_L1_TAP;
   vector<short>   *trig_L2_passedRaw;
   vector<short>   *trig_EF_passedRaw;
   Bool_t          trig_L2_truncated;
   Bool_t          trig_EF_truncated;
   vector<short>   *trig_L2_resurrected;
   vector<short>   *trig_EF_resurrected;
   vector<short>   *trig_L2_passedThrough;
   vector<short>   *trig_EF_passedThrough;
   vector<short>   *trig_L2_wasPrescaled;
   vector<short>   *trig_L2_wasResurrected;
   vector<short>   *trig_EF_wasPrescaled;
   vector<short>   *trig_EF_wasResurrected;
   UInt_t          trig_DB_SMK;
   UInt_t          trig_DB_L1PSK;
   UInt_t          trig_DB_HLTPSK;
   Int_t           bcmRDO_n;
   vector<vector<int> > *bcmRDO_channel;
   vector<int>     *bcmRDO_nhits;
   vector<vector<int> > *bcmRDO_pulse1pos;
   vector<vector<int> > *bcmRDO_pulse1width;
   vector<vector<int> > *bcmRDO_pulse2pos;
   vector<vector<int> > *bcmRDO_pulse2width;
   vector<vector<int> > *bcmRDO_lvl1a;
   vector<vector<int> > *bcmRDO_bcid;
   vector<vector<int> > *bcmRDO_lvl1id;
   UInt_t          mbtsLvl2_nElements;
   vector<float>   *mbtsLvl2_energies;
   UInt_t          mbtsLvl2_ntimes;
   vector<float>   *mbtsLvl2_times;
   UInt_t          lvl2_sp_nElements;
   UInt_t          lvl2_sp_hPixelClusTotBins;
   Float_t         lvl2_sp_hPixelClusTotMin;
   Float_t         lvl2_sp_hPixelClusTotMax;
   UInt_t          lvl2_sp_hPixelClusSizeBins;
   Float_t         lvl2_sp_hPixelClusSizeMin;
   Float_t         lvl2_sp_hPixelClusSizeMax;
   vector<float>   *lvl2_sp_pixelClusEndcapC_contents;
   vector<float>   *lvl2_sp_pixelClusBarrel_contents;
   vector<float>   *lvl2_sp_pixelClusEndcapA_contents;
   vector<unsigned int> *lvl2_sp_droppedPixelModuleIds;
   UInt_t          lvl2_sp_sctSpEndcapC;
   UInt_t          lvl2_sp_sctSpBarrel;
   UInt_t          lvl2_sp_sctSpEndcapA;
   vector<unsigned int> *lvl2_sp_droppedSctModuleIds;
   UInt_t          lvl2_mbTrt_nElements;
   UInt_t          lvl2_mbTrt_hTotBins;
   Float_t         lvl2_mbTrt_hTotMin;
   Float_t         lvl2_mbTrt_hTotMax;
   vector<float>   *lvl2_mbTrt_endcapC_contents;
   vector<float>   *lvl2_mbTrt_barrel_contents;
   vector<float>   *lvl2_mbTrt_endcapA_contents;
   UInt_t          ef_trk_nElements;
   UInt_t          ef_trk_hZ0Bins;
   Float_t         ef_trk_hZ0Min;
   Float_t         ef_trk_hZ0Max;
   UInt_t          ef_trk_hPtBins;
   Float_t         ef_trk_hPtMin;
   Float_t         ef_trk_hPtMax;
   UInt_t          ef_trk_hEtaBins;
   Float_t         ef_trk_hEtaMin;
   Float_t         ef_trk_hEtaMax;
   UInt_t          ef_trk_hPhiBins;
   Float_t         ef_trk_hPhiMin;
   Float_t         ef_trk_hPhiMax;
   vector<float>   *ef_trk_z0_pt_contents;
   vector<float>   *ef_trk_eta_phi_contents;
   Int_t           trkPix_n;
   vector<float>   *trkPix_d0;
   vector<float>   *trkPix_z0;
   vector<float>   *trkPix_phi;
   vector<float>   *trkPix_theta;
   vector<float>   *trkPix_qoverp;
   vector<float>   *trkPix_pt;
   vector<float>   *trkPix_eta;
   vector<float>   *trkPix_err_d0;
   vector<float>   *trkPix_err_z0;
   vector<float>   *trkPix_err_phi;
   vector<float>   *trkPix_err_theta;
   vector<float>   *trkPix_err_qoverp;
   vector<float>   *trkPix_cov_d0_z0;
   vector<float>   *trkPix_cov_d0_phi;
   vector<float>   *trkPix_cov_d0_theta;
   vector<float>   *trkPix_cov_d0_qoverp;
   vector<float>   *trkPix_cov_z0_phi;
   vector<float>   *trkPix_cov_z0_theta;
   vector<float>   *trkPix_cov_z0_qoverp;
   vector<float>   *trkPix_cov_phi_theta;
   vector<float>   *trkPix_cov_phi_qoverp;
   vector<float>   *trkPix_cov_theta_qoverp;
   vector<float>   *trkPix_d0_wrtPV;
   vector<float>   *trkPix_z0_wrtPV;
   vector<float>   *trkPix_phi_wrtPV;
   vector<float>   *trkPix_err_d0_wrtPV;
   vector<float>   *trkPix_err_z0_wrtPV;
   vector<float>   *trkPix_err_phi_wrtPV;
   vector<float>   *trkPix_err_theta_wrtPV;
   vector<float>   *trkPix_err_qoverp_wrtPV;
   vector<float>   *trkPix_cov_d0_z0_wrtPV;
   vector<float>   *trkPix_cov_d0_phi_wrtPV;
   vector<float>   *trkPix_cov_d0_theta_wrtPV;
   vector<float>   *trkPix_cov_d0_qoverp_wrtPV;
   vector<float>   *trkPix_cov_z0_phi_wrtPV;
   vector<float>   *trkPix_cov_z0_theta_wrtPV;
   vector<float>   *trkPix_cov_z0_qoverp_wrtPV;
   vector<float>   *trkPix_cov_phi_theta_wrtPV;
   vector<float>   *trkPix_cov_phi_qoverp_wrtPV;
   vector<float>   *trkPix_cov_theta_qoverp_wrtPV;
   vector<float>   *trkPix_d0_wrtBS;
   vector<float>   *trkPix_z0_wrtBS;
   vector<float>   *trkPix_phi_wrtBS;
   vector<float>   *trkPix_err_d0_wrtBS;
   vector<float>   *trkPix_err_z0_wrtBS;
   vector<float>   *trkPix_err_phi_wrtBS;
   vector<float>   *trkPix_err_theta_wrtBS;
   vector<float>   *trkPix_err_qoverp_wrtBS;
   vector<float>   *trkPix_cov_d0_z0_wrtBS;
   vector<float>   *trkPix_cov_d0_phi_wrtBS;
   vector<float>   *trkPix_cov_d0_theta_wrtBS;
   vector<float>   *trkPix_cov_d0_qoverp_wrtBS;
   vector<float>   *trkPix_cov_z0_phi_wrtBS;
   vector<float>   *trkPix_cov_z0_theta_wrtBS;
   vector<float>   *trkPix_cov_z0_qoverp_wrtBS;
   vector<float>   *trkPix_cov_phi_theta_wrtBS;
   vector<float>   *trkPix_cov_phi_qoverp_wrtBS;
   vector<float>   *trkPix_cov_theta_qoverp_wrtBS;
   vector<float>   *trkPix_d0_wrtBL;
   vector<float>   *trkPix_z0_wrtBL;
   vector<float>   *trkPix_phi_wrtBL;
   vector<float>   *trkPix_d0_err_wrtBL;
   vector<float>   *trkPix_z0_err_wrtBL;
   vector<float>   *trkPix_phi_err_wrtBL;
   vector<float>   *trkPix_theta_err_wrtBL;
   vector<float>   *trkPix_qoverp_err_wrtBL;
   vector<float>   *trkPix_d0_z0_err_wrtBL;
   vector<float>   *trkPix_d0_phi_err_wrtBL;
   vector<float>   *trkPix_d0_theta_err_wrtBL;
   vector<float>   *trkPix_d0_qoverp_err_wrtBL;
   vector<float>   *trkPix_z0_phi_err_wrtBL;
   vector<float>   *trkPix_z0_theta_err_wrtBL;
   vector<float>   *trkPix_z0_qoverp_err_wrtBL;
   vector<float>   *trkPix_phi_theta_err_wrtBL;
   vector<float>   *trkPix_phi_qoverp_err_wrtBL;
   vector<float>   *trkPix_theta_qoverp_err_wrtBL;
   vector<float>   *trkPix_chi2;
   vector<int>     *trkPix_ndof;
   vector<int>     *trkPix_nBLHits;
   vector<int>     *trkPix_nPixHits;
   vector<int>     *trkPix_nSCTHits;
   vector<int>     *trkPix_nTRTHits;
   vector<int>     *trkPix_nTRTHighTHits;
   vector<int>     *trkPix_nTRTXenonHits;
   vector<int>     *trkPix_nPixHoles;
   vector<int>     *trkPix_nSCTHoles;
   vector<int>     *trkPix_nTRTHoles;
   vector<int>     *trkPix_nPixelDeadSensors;
   vector<int>     *trkPix_nSCTDeadSensors;
   vector<int>     *trkPix_nBLSharedHits;
   vector<int>     *trkPix_nPixSharedHits;
   vector<int>     *trkPix_nSCTSharedHits;
   vector<int>     *trkPix_nBLayerSplitHits;
   vector<int>     *trkPix_nPixSplitHits;
   vector<int>     *trkPix_nBLayerOutliers;
   vector<int>     *trkPix_nPixelOutliers;
   vector<int>     *trkPix_nSCTOutliers;
   vector<int>     *trkPix_nTRTOutliers;
   vector<int>     *trkPix_nTRTHighTOutliers;
   vector<int>     *trkPix_expectBLayerHit;
   vector<int>     *trkPix_nHits;
   vector<int>     *trkPix_nHoles;
   vector<int>     *trkPix_hitPattern;
   vector<float>   *trkPix_pixeldEdx;
   vector<int>     *trkPix_nGoodHitsPixeldEdx;
   vector<float>   *trkPix_massPixeldEdx;
   vector<vector<float> > *trkPix_likelihoodsPixeldEdx;
   vector<int>     *trkPix_fitter;
   vector<int>     *trkPix_patternReco1;
   vector<int>     *trkPix_patternReco2;
   vector<int>     *trkPix_trackProperties;
   vector<int>     *trkPix_particleHypothesis;
   vector<vector<float> > *trkPix_blayerPrediction_x;
   vector<vector<float> > *trkPix_blayerPrediction_y;
   vector<vector<float> > *trkPix_blayerPrediction_z;
   vector<vector<float> > *trkPix_blayerPrediction_locX;
   vector<vector<float> > *trkPix_blayerPrediction_locY;
   vector<vector<float> > *trkPix_blayerPrediction_err_locX;
   vector<vector<float> > *trkPix_blayerPrediction_err_locY;
   vector<vector<float> > *trkPix_blayerPrediction_etaDistToEdge;
   vector<vector<float> > *trkPix_blayerPrediction_phiDistToEdge;
   vector<vector<unsigned int> > *trkPix_blayerPrediction_detElementId;
   vector<vector<int> > *trkPix_blayerPrediction_row;
   vector<vector<int> > *trkPix_blayerPrediction_col;
   vector<vector<int> > *trkPix_blayerPrediction_type;
   vector<int>     *trkPix_Pixel_hit_n;
   vector<vector<unsigned int> > *trkPix_Pixel_hit_id;
   vector<vector<unsigned int> > *trkPix_Pixel_hit_detElementId;
   vector<vector<int> > *trkPix_Pixel_hit_detType;
   vector<vector<int> > *trkPix_Pixel_hit_bec;
   vector<vector<int> > *trkPix_Pixel_hit_layer;
   vector<vector<float> > *trkPix_Pixel_hit_charge;
   vector<vector<int> > *trkPix_Pixel_hit_sizePhi;
   vector<vector<int> > *trkPix_Pixel_hit_sizeZ;
   vector<vector<int> > *trkPix_Pixel_hit_size;
   vector<vector<int> > *trkPix_Pixel_hit_isFake;
   vector<vector<int> > *trkPix_Pixel_hit_isGanged;
   vector<vector<int> > *trkPix_Pixel_hit_isSplit;
   vector<vector<float> > *trkPix_Pixel_hit_splitProb1;
   vector<vector<float> > *trkPix_Pixel_hit_splitProb2;
   vector<vector<int> > *trkPix_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trkPix_Pixel_hit_locX;
   vector<vector<float> > *trkPix_Pixel_hit_locY;
   vector<vector<float> > *trkPix_Pixel_hit_incidencePhi;
   vector<vector<float> > *trkPix_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trkPix_Pixel_hit_err_locX;
   vector<vector<float> > *trkPix_Pixel_hit_err_locY;
   vector<vector<float> > *trkPix_Pixel_hit_cov_locXY;
   vector<vector<float> > *trkPix_Pixel_hit_x;
   vector<vector<float> > *trkPix_Pixel_hit_y;
   vector<vector<float> > *trkPix_Pixel_hit_z;
   vector<vector<float> > *trkPix_Pixel_hit_trkLocX;
   vector<vector<float> > *trkPix_Pixel_hit_trkLocY;
   vector<vector<float> > *trkPix_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trkPix_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trkPix_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trkPix_Pixel_hit_chi2;
   vector<vector<int> > *trkPix_Pixel_hit_ndof;
   vector<int>     *trkPix_SCT_hit_n;
   vector<vector<unsigned int> > *trkPix_SCT_hit_id;
   vector<vector<unsigned int> > *trkPix_SCT_hit_detElementId;
   vector<vector<int> > *trkPix_SCT_hit_detType;
   vector<vector<int> > *trkPix_SCT_hit_bec;
   vector<vector<int> > *trkPix_SCT_hit_layer;
   vector<vector<int> > *trkPix_SCT_hit_sizePhi;
   vector<vector<int> > *trkPix_SCT_hit_isCompetingRIO;
   vector<vector<float> > *trkPix_SCT_hit_locX;
   vector<vector<float> > *trkPix_SCT_hit_locY;
   vector<vector<float> > *trkPix_SCT_hit_incidencePhi;
   vector<vector<float> > *trkPix_SCT_hit_incidenceTheta;
   vector<vector<float> > *trkPix_SCT_hit_err_locX;
   vector<vector<float> > *trkPix_SCT_hit_err_locY;
   vector<vector<float> > *trkPix_SCT_hit_cov_locXY;
   vector<vector<float> > *trkPix_SCT_hit_x;
   vector<vector<float> > *trkPix_SCT_hit_y;
   vector<vector<float> > *trkPix_SCT_hit_z;
   vector<vector<float> > *trkPix_SCT_hit_trkLocX;
   vector<vector<float> > *trkPix_SCT_hit_trkLocY;
   vector<vector<float> > *trkPix_SCT_hit_err_trkLocX;
   vector<vector<float> > *trkPix_SCT_hit_err_trkLocY;
   vector<vector<float> > *trkPix_SCT_hit_cov_trkLocXY;
   vector<vector<float> > *trkPix_SCT_hit_chi2;
   vector<vector<int> > *trkPix_SCT_hit_ndof;
   vector<int>     *trkPix_TRT_hit_n;
   vector<vector<unsigned int> > *trkPix_TRT_hit_id;
   vector<vector<unsigned int> > *trkPix_TRT_hit_detElementId;
   vector<vector<int> > *trkPix_TRT_hit_detType;
   vector<vector<int> > *trkPix_TRT_hit_bec;
   vector<vector<int> > *trkPix_TRT_hit_layer;
   vector<vector<int> > *trkPix_TRT_hit_isCompetingRIO;
   vector<vector<float> > *trkPix_TRT_hit_locR;
   vector<vector<float> > *trkPix_TRT_hit_err_locR;
   vector<vector<float> > *trkPix_TRT_hit_trkLocR;
   vector<vector<float> > *trkPix_TRT_hit_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_hit_err_trkLocR;
   vector<vector<float> > *trkPix_TRT_hit_err_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_hit_cov_trkLocRPhi;
   vector<vector<float> > *trkPix_TRT_hit_TOT;
   vector<vector<int> > *trkPix_TRT_hit_highLevel;
   vector<vector<float> > *trkPix_TRT_hit_trailingEdge;
   vector<vector<float> > *trkPix_TRT_hit_chi2;
   vector<vector<int> > *trkPix_TRT_hit_ndof;
   vector<int>     *trkPix_Pixel_outlier_n;
   vector<vector<unsigned int> > *trkPix_Pixel_outlier_id;
   vector<vector<unsigned int> > *trkPix_Pixel_outlier_detElementId;
   vector<vector<int> > *trkPix_Pixel_outlier_detType;
   vector<vector<int> > *trkPix_Pixel_outlier_bec;
   vector<vector<int> > *trkPix_Pixel_outlier_layer;
   vector<vector<float> > *trkPix_Pixel_outlier_charge;
   vector<vector<int> > *trkPix_Pixel_outlier_sizePhi;
   vector<vector<int> > *trkPix_Pixel_outlier_sizeZ;
   vector<vector<int> > *trkPix_Pixel_outlier_size;
   vector<vector<int> > *trkPix_Pixel_outlier_isFake;
   vector<vector<int> > *trkPix_Pixel_outlier_isGanged;
   vector<vector<int> > *trkPix_Pixel_outlier_isSplit;
   vector<vector<float> > *trkPix_Pixel_outlier_splitProb1;
   vector<vector<float> > *trkPix_Pixel_outlier_splitProb2;
   vector<vector<int> > *trkPix_Pixel_outlier_isCompetingRIO;
   vector<vector<float> > *trkPix_Pixel_outlier_locX;
   vector<vector<float> > *trkPix_Pixel_outlier_locY;
   vector<vector<float> > *trkPix_Pixel_outlier_incidencePhi;
   vector<vector<float> > *trkPix_Pixel_outlier_incidenceTheta;
   vector<vector<float> > *trkPix_Pixel_outlier_err_locX;
   vector<vector<float> > *trkPix_Pixel_outlier_err_locY;
   vector<vector<float> > *trkPix_Pixel_outlier_cov_locXY;
   vector<vector<float> > *trkPix_Pixel_outlier_x;
   vector<vector<float> > *trkPix_Pixel_outlier_y;
   vector<vector<float> > *trkPix_Pixel_outlier_z;
   vector<vector<float> > *trkPix_Pixel_outlier_trkLocX;
   vector<vector<float> > *trkPix_Pixel_outlier_trkLocY;
   vector<vector<float> > *trkPix_Pixel_outlier_err_trkLocX;
   vector<vector<float> > *trkPix_Pixel_outlier_err_trkLocY;
   vector<vector<float> > *trkPix_Pixel_outlier_cov_trkLocXY;
   vector<vector<float> > *trkPix_Pixel_outlier_chi2;
   vector<vector<int> > *trkPix_Pixel_outlier_ndof;
   vector<int>     *trkPix_SCT_outlier_n;
   vector<vector<unsigned int> > *trkPix_SCT_outlier_id;
   vector<vector<unsigned int> > *trkPix_SCT_outlier_detElementId;
   vector<vector<int> > *trkPix_SCT_outlier_detType;
   vector<vector<int> > *trkPix_SCT_outlier_bec;
   vector<vector<int> > *trkPix_SCT_outlier_layer;
   vector<vector<int> > *trkPix_SCT_outlier_sizePhi;
   vector<vector<int> > *trkPix_SCT_outlier_isCompetingRIO;
   vector<vector<float> > *trkPix_SCT_outlier_locX;
   vector<vector<float> > *trkPix_SCT_outlier_locY;
   vector<vector<float> > *trkPix_SCT_outlier_incidencePhi;
   vector<vector<float> > *trkPix_SCT_outlier_incidenceTheta;
   vector<vector<float> > *trkPix_SCT_outlier_err_locX;
   vector<vector<float> > *trkPix_SCT_outlier_err_locY;
   vector<vector<float> > *trkPix_SCT_outlier_cov_locXY;
   vector<vector<float> > *trkPix_SCT_outlier_x;
   vector<vector<float> > *trkPix_SCT_outlier_y;
   vector<vector<float> > *trkPix_SCT_outlier_z;
   vector<vector<float> > *trkPix_SCT_outlier_trkLocX;
   vector<vector<float> > *trkPix_SCT_outlier_trkLocY;
   vector<vector<float> > *trkPix_SCT_outlier_err_trkLocX;
   vector<vector<float> > *trkPix_SCT_outlier_err_trkLocY;
   vector<vector<float> > *trkPix_SCT_outlier_cov_trkLocXY;
   vector<vector<float> > *trkPix_SCT_outlier_chi2;
   vector<vector<int> > *trkPix_SCT_outlier_ndof;
   vector<int>     *trkPix_TRT_outlier_n;
   vector<vector<unsigned int> > *trkPix_TRT_outlier_id;
   vector<vector<unsigned int> > *trkPix_TRT_outlier_detElementId;
   vector<vector<int> > *trkPix_TRT_outlier_detType;
   vector<vector<int> > *trkPix_TRT_outlier_bec;
   vector<vector<int> > *trkPix_TRT_outlier_layer;
   vector<vector<int> > *trkPix_TRT_outlier_isCompetingRIO;
   vector<vector<float> > *trkPix_TRT_outlier_locR;
   vector<vector<float> > *trkPix_TRT_outlier_err_locR;
   vector<vector<float> > *trkPix_TRT_outlier_trkLocR;
   vector<vector<float> > *trkPix_TRT_outlier_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_outlier_err_trkLocR;
   vector<vector<float> > *trkPix_TRT_outlier_err_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_outlier_cov_trkLocRPhi;
   vector<vector<float> > *trkPix_TRT_outlier_TOT;
   vector<vector<int> > *trkPix_TRT_outlier_highLevel;
   vector<vector<float> > *trkPix_TRT_outlier_trailingEdge;
   vector<vector<float> > *trkPix_TRT_outlier_chi2;
   vector<vector<int> > *trkPix_TRT_outlier_ndof;
   vector<int>     *trkPix_Pixel_hole_n;
   vector<vector<unsigned int> > *trkPix_Pixel_hole_detElementId;
   vector<vector<int> > *trkPix_Pixel_hole_bec;
   vector<vector<int> > *trkPix_Pixel_hole_layer;
   vector<vector<float> > *trkPix_Pixel_hole_trkLocX;
   vector<vector<float> > *trkPix_Pixel_hole_trkLocY;
   vector<vector<float> > *trkPix_Pixel_hole_err_trkLocX;
   vector<vector<float> > *trkPix_Pixel_hole_err_trkLocY;
   vector<vector<float> > *trkPix_Pixel_hole_cov_trkLocXY;
   vector<int>     *trkPix_SCT_hole_n;
   vector<vector<unsigned int> > *trkPix_SCT_hole_detElementId;
   vector<vector<int> > *trkPix_SCT_hole_bec;
   vector<vector<int> > *trkPix_SCT_hole_layer;
   vector<vector<float> > *trkPix_SCT_hole_trkLocX;
   vector<vector<float> > *trkPix_SCT_hole_trkLocY;
   vector<vector<float> > *trkPix_SCT_hole_err_trkLocX;
   vector<vector<float> > *trkPix_SCT_hole_err_trkLocY;
   vector<vector<float> > *trkPix_SCT_hole_cov_trkLocXY;
   vector<int>     *trkPix_TRT_hole_n;
   vector<vector<unsigned int> > *trkPix_TRT_hole_detElementId;
   vector<vector<int> > *trkPix_TRT_hole_bec;
   vector<vector<int> > *trkPix_TRT_hole_layer;
   vector<vector<float> > *trkPix_TRT_hole_trkLocR;
   vector<vector<float> > *trkPix_TRT_hole_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_hole_err_trkLocR;
   vector<vector<float> > *trkPix_TRT_hole_err_trkLocPhi;
   vector<vector<float> > *trkPix_TRT_hole_cov_trkLocRPhi;
   Int_t           trkSCT_n;
   vector<float>   *trkSCT_d0;
   vector<float>   *trkSCT_z0;
   vector<float>   *trkSCT_phi;
   vector<float>   *trkSCT_theta;
   vector<float>   *trkSCT_qoverp;
   vector<float>   *trkSCT_pt;
   vector<float>   *trkSCT_eta;
   vector<float>   *trkSCT_err_d0;
   vector<float>   *trkSCT_err_z0;
   vector<float>   *trkSCT_err_phi;
   vector<float>   *trkSCT_err_theta;
   vector<float>   *trkSCT_err_qoverp;
   vector<float>   *trkSCT_cov_d0_z0;
   vector<float>   *trkSCT_cov_d0_phi;
   vector<float>   *trkSCT_cov_d0_theta;
   vector<float>   *trkSCT_cov_d0_qoverp;
   vector<float>   *trkSCT_cov_z0_phi;
   vector<float>   *trkSCT_cov_z0_theta;
   vector<float>   *trkSCT_cov_z0_qoverp;
   vector<float>   *trkSCT_cov_phi_theta;
   vector<float>   *trkSCT_cov_phi_qoverp;
   vector<float>   *trkSCT_cov_theta_qoverp;
   vector<float>   *trkSCT_d0_wrtPV;
   vector<float>   *trkSCT_z0_wrtPV;
   vector<float>   *trkSCT_phi_wrtPV;
   vector<float>   *trkSCT_err_d0_wrtPV;
   vector<float>   *trkSCT_err_z0_wrtPV;
   vector<float>   *trkSCT_err_phi_wrtPV;
   vector<float>   *trkSCT_err_theta_wrtPV;
   vector<float>   *trkSCT_err_qoverp_wrtPV;
   vector<float>   *trkSCT_cov_d0_z0_wrtPV;
   vector<float>   *trkSCT_cov_d0_phi_wrtPV;
   vector<float>   *trkSCT_cov_d0_theta_wrtPV;
   vector<float>   *trkSCT_cov_d0_qoverp_wrtPV;
   vector<float>   *trkSCT_cov_z0_phi_wrtPV;
   vector<float>   *trkSCT_cov_z0_theta_wrtPV;
   vector<float>   *trkSCT_cov_z0_qoverp_wrtPV;
   vector<float>   *trkSCT_cov_phi_theta_wrtPV;
   vector<float>   *trkSCT_cov_phi_qoverp_wrtPV;
   vector<float>   *trkSCT_cov_theta_qoverp_wrtPV;
   vector<float>   *trkSCT_d0_wrtBS;
   vector<float>   *trkSCT_z0_wrtBS;
   vector<float>   *trkSCT_phi_wrtBS;
   vector<float>   *trkSCT_err_d0_wrtBS;
   vector<float>   *trkSCT_err_z0_wrtBS;
   vector<float>   *trkSCT_err_phi_wrtBS;
   vector<float>   *trkSCT_err_theta_wrtBS;
   vector<float>   *trkSCT_err_qoverp_wrtBS;
   vector<float>   *trkSCT_cov_d0_z0_wrtBS;
   vector<float>   *trkSCT_cov_d0_phi_wrtBS;
   vector<float>   *trkSCT_cov_d0_theta_wrtBS;
   vector<float>   *trkSCT_cov_d0_qoverp_wrtBS;
   vector<float>   *trkSCT_cov_z0_phi_wrtBS;
   vector<float>   *trkSCT_cov_z0_theta_wrtBS;
   vector<float>   *trkSCT_cov_z0_qoverp_wrtBS;
   vector<float>   *trkSCT_cov_phi_theta_wrtBS;
   vector<float>   *trkSCT_cov_phi_qoverp_wrtBS;
   vector<float>   *trkSCT_cov_theta_qoverp_wrtBS;
   vector<float>   *trkSCT_d0_wrtBL;
   vector<float>   *trkSCT_z0_wrtBL;
   vector<float>   *trkSCT_phi_wrtBL;
   vector<float>   *trkSCT_d0_err_wrtBL;
   vector<float>   *trkSCT_z0_err_wrtBL;
   vector<float>   *trkSCT_phi_err_wrtBL;
   vector<float>   *trkSCT_theta_err_wrtBL;
   vector<float>   *trkSCT_qoverp_err_wrtBL;
   vector<float>   *trkSCT_d0_z0_err_wrtBL;
   vector<float>   *trkSCT_d0_phi_err_wrtBL;
   vector<float>   *trkSCT_d0_theta_err_wrtBL;
   vector<float>   *trkSCT_d0_qoverp_err_wrtBL;
   vector<float>   *trkSCT_z0_phi_err_wrtBL;
   vector<float>   *trkSCT_z0_theta_err_wrtBL;
   vector<float>   *trkSCT_z0_qoverp_err_wrtBL;
   vector<float>   *trkSCT_phi_theta_err_wrtBL;
   vector<float>   *trkSCT_phi_qoverp_err_wrtBL;
   vector<float>   *trkSCT_theta_qoverp_err_wrtBL;
   vector<float>   *trkSCT_chi2;
   vector<int>     *trkSCT_ndof;
   vector<int>     *trkSCT_nBLHits;
   vector<int>     *trkSCT_nPixHits;
   vector<int>     *trkSCT_nSCTHits;
   vector<int>     *trkSCT_nTRTHits;
   vector<int>     *trkSCT_nTRTHighTHits;
   vector<int>     *trkSCT_nTRTXenonHits;
   vector<int>     *trkSCT_nPixHoles;
   vector<int>     *trkSCT_nSCTHoles;
   vector<int>     *trkSCT_nTRTHoles;
   vector<int>     *trkSCT_nPixelDeadSensors;
   vector<int>     *trkSCT_nSCTDeadSensors;
   vector<int>     *trkSCT_nBLSharedHits;
   vector<int>     *trkSCT_nPixSharedHits;
   vector<int>     *trkSCT_nSCTSharedHits;
   vector<int>     *trkSCT_nBLayerSplitHits;
   vector<int>     *trkSCT_nPixSplitHits;
   vector<int>     *trkSCT_nBLayerOutliers;
   vector<int>     *trkSCT_nPixelOutliers;
   vector<int>     *trkSCT_nSCTOutliers;
   vector<int>     *trkSCT_nTRTOutliers;
   vector<int>     *trkSCT_nTRTHighTOutliers;
   vector<int>     *trkSCT_expectBLayerHit;
   vector<int>     *trkSCT_nHits;
   vector<int>     *trkSCT_nHoles;
   vector<int>     *trkSCT_hitPattern;
   vector<float>   *trkSCT_pixeldEdx;
   vector<int>     *trkSCT_nGoodHitsPixeldEdx;
   vector<float>   *trkSCT_massPixeldEdx;
   vector<vector<float> > *trkSCT_likelihoodsPixeldEdx;
   vector<int>     *trkSCT_fitter;
   vector<int>     *trkSCT_patternReco1;
   vector<int>     *trkSCT_patternReco2;
   vector<int>     *trkSCT_trackProperties;
   vector<int>     *trkSCT_particleHypothesis;
   vector<vector<float> > *trkSCT_blayerPrediction_x;
   vector<vector<float> > *trkSCT_blayerPrediction_y;
   vector<vector<float> > *trkSCT_blayerPrediction_z;
   vector<vector<float> > *trkSCT_blayerPrediction_locX;
   vector<vector<float> > *trkSCT_blayerPrediction_locY;
   vector<vector<float> > *trkSCT_blayerPrediction_err_locX;
   vector<vector<float> > *trkSCT_blayerPrediction_err_locY;
   vector<vector<float> > *trkSCT_blayerPrediction_etaDistToEdge;
   vector<vector<float> > *trkSCT_blayerPrediction_phiDistToEdge;
   vector<vector<unsigned int> > *trkSCT_blayerPrediction_detElementId;
   vector<vector<int> > *trkSCT_blayerPrediction_row;
   vector<vector<int> > *trkSCT_blayerPrediction_col;
   vector<vector<int> > *trkSCT_blayerPrediction_type;
   vector<int>     *trkSCT_Pixel_hit_n;
   vector<vector<unsigned int> > *trkSCT_Pixel_hit_id;
   vector<vector<unsigned int> > *trkSCT_Pixel_hit_detElementId;
   vector<vector<int> > *trkSCT_Pixel_hit_detType;
   vector<vector<int> > *trkSCT_Pixel_hit_bec;
   vector<vector<int> > *trkSCT_Pixel_hit_layer;
   vector<vector<float> > *trkSCT_Pixel_hit_charge;
   vector<vector<int> > *trkSCT_Pixel_hit_sizePhi;
   vector<vector<int> > *trkSCT_Pixel_hit_sizeZ;
   vector<vector<int> > *trkSCT_Pixel_hit_size;
   vector<vector<int> > *trkSCT_Pixel_hit_isFake;
   vector<vector<int> > *trkSCT_Pixel_hit_isGanged;
   vector<vector<int> > *trkSCT_Pixel_hit_isSplit;
   vector<vector<float> > *trkSCT_Pixel_hit_splitProb1;
   vector<vector<float> > *trkSCT_Pixel_hit_splitProb2;
   vector<vector<int> > *trkSCT_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trkSCT_Pixel_hit_locX;
   vector<vector<float> > *trkSCT_Pixel_hit_locY;
   vector<vector<float> > *trkSCT_Pixel_hit_incidencePhi;
   vector<vector<float> > *trkSCT_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trkSCT_Pixel_hit_err_locX;
   vector<vector<float> > *trkSCT_Pixel_hit_err_locY;
   vector<vector<float> > *trkSCT_Pixel_hit_cov_locXY;
   vector<vector<float> > *trkSCT_Pixel_hit_x;
   vector<vector<float> > *trkSCT_Pixel_hit_y;
   vector<vector<float> > *trkSCT_Pixel_hit_z;
   vector<vector<float> > *trkSCT_Pixel_hit_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_hit_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trkSCT_Pixel_hit_chi2;
   vector<vector<int> > *trkSCT_Pixel_hit_ndof;
   vector<int>     *trkSCT_SCT_hit_n;
   vector<vector<unsigned int> > *trkSCT_SCT_hit_id;
   vector<vector<unsigned int> > *trkSCT_SCT_hit_detElementId;
   vector<vector<int> > *trkSCT_SCT_hit_detType;
   vector<vector<int> > *trkSCT_SCT_hit_bec;
   vector<vector<int> > *trkSCT_SCT_hit_layer;
   vector<vector<int> > *trkSCT_SCT_hit_sizePhi;
   vector<vector<int> > *trkSCT_SCT_hit_isCompetingRIO;
   vector<vector<float> > *trkSCT_SCT_hit_locX;
   vector<vector<float> > *trkSCT_SCT_hit_locY;
   vector<vector<float> > *trkSCT_SCT_hit_incidencePhi;
   vector<vector<float> > *trkSCT_SCT_hit_incidenceTheta;
   vector<vector<float> > *trkSCT_SCT_hit_err_locX;
   vector<vector<float> > *trkSCT_SCT_hit_err_locY;
   vector<vector<float> > *trkSCT_SCT_hit_cov_locXY;
   vector<vector<float> > *trkSCT_SCT_hit_x;
   vector<vector<float> > *trkSCT_SCT_hit_y;
   vector<vector<float> > *trkSCT_SCT_hit_z;
   vector<vector<float> > *trkSCT_SCT_hit_trkLocX;
   vector<vector<float> > *trkSCT_SCT_hit_trkLocY;
   vector<vector<float> > *trkSCT_SCT_hit_err_trkLocX;
   vector<vector<float> > *trkSCT_SCT_hit_err_trkLocY;
   vector<vector<float> > *trkSCT_SCT_hit_cov_trkLocXY;
   vector<vector<float> > *trkSCT_SCT_hit_chi2;
   vector<vector<int> > *trkSCT_SCT_hit_ndof;
   vector<int>     *trkSCT_TRT_hit_n;
   vector<vector<unsigned int> > *trkSCT_TRT_hit_id;
   vector<vector<unsigned int> > *trkSCT_TRT_hit_detElementId;
   vector<vector<int> > *trkSCT_TRT_hit_detType;
   vector<vector<int> > *trkSCT_TRT_hit_bec;
   vector<vector<int> > *trkSCT_TRT_hit_layer;
   vector<vector<int> > *trkSCT_TRT_hit_isCompetingRIO;
   vector<vector<float> > *trkSCT_TRT_hit_locR;
   vector<vector<float> > *trkSCT_TRT_hit_err_locR;
   vector<vector<float> > *trkSCT_TRT_hit_trkLocR;
   vector<vector<float> > *trkSCT_TRT_hit_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_hit_err_trkLocR;
   vector<vector<float> > *trkSCT_TRT_hit_err_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_hit_cov_trkLocRPhi;
   vector<vector<float> > *trkSCT_TRT_hit_TOT;
   vector<vector<int> > *trkSCT_TRT_hit_highLevel;
   vector<vector<float> > *trkSCT_TRT_hit_trailingEdge;
   vector<vector<float> > *trkSCT_TRT_hit_chi2;
   vector<vector<int> > *trkSCT_TRT_hit_ndof;
   vector<int>     *trkSCT_Pixel_outlier_n;
   vector<vector<unsigned int> > *trkSCT_Pixel_outlier_id;
   vector<vector<unsigned int> > *trkSCT_Pixel_outlier_detElementId;
   vector<vector<int> > *trkSCT_Pixel_outlier_detType;
   vector<vector<int> > *trkSCT_Pixel_outlier_bec;
   vector<vector<int> > *trkSCT_Pixel_outlier_layer;
   vector<vector<float> > *trkSCT_Pixel_outlier_charge;
   vector<vector<int> > *trkSCT_Pixel_outlier_sizePhi;
   vector<vector<int> > *trkSCT_Pixel_outlier_sizeZ;
   vector<vector<int> > *trkSCT_Pixel_outlier_size;
   vector<vector<int> > *trkSCT_Pixel_outlier_isFake;
   vector<vector<int> > *trkSCT_Pixel_outlier_isGanged;
   vector<vector<int> > *trkSCT_Pixel_outlier_isSplit;
   vector<vector<float> > *trkSCT_Pixel_outlier_splitProb1;
   vector<vector<float> > *trkSCT_Pixel_outlier_splitProb2;
   vector<vector<int> > *trkSCT_Pixel_outlier_isCompetingRIO;
   vector<vector<float> > *trkSCT_Pixel_outlier_locX;
   vector<vector<float> > *trkSCT_Pixel_outlier_locY;
   vector<vector<float> > *trkSCT_Pixel_outlier_incidencePhi;
   vector<vector<float> > *trkSCT_Pixel_outlier_incidenceTheta;
   vector<vector<float> > *trkSCT_Pixel_outlier_err_locX;
   vector<vector<float> > *trkSCT_Pixel_outlier_err_locY;
   vector<vector<float> > *trkSCT_Pixel_outlier_cov_locXY;
   vector<vector<float> > *trkSCT_Pixel_outlier_x;
   vector<vector<float> > *trkSCT_Pixel_outlier_y;
   vector<vector<float> > *trkSCT_Pixel_outlier_z;
   vector<vector<float> > *trkSCT_Pixel_outlier_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_outlier_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_outlier_err_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_outlier_err_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_outlier_cov_trkLocXY;
   vector<vector<float> > *trkSCT_Pixel_outlier_chi2;
   vector<vector<int> > *trkSCT_Pixel_outlier_ndof;
   vector<int>     *trkSCT_SCT_outlier_n;
   vector<vector<unsigned int> > *trkSCT_SCT_outlier_id;
   vector<vector<unsigned int> > *trkSCT_SCT_outlier_detElementId;
   vector<vector<int> > *trkSCT_SCT_outlier_detType;
   vector<vector<int> > *trkSCT_SCT_outlier_bec;
   vector<vector<int> > *trkSCT_SCT_outlier_layer;
   vector<vector<int> > *trkSCT_SCT_outlier_sizePhi;
   vector<vector<int> > *trkSCT_SCT_outlier_isCompetingRIO;
   vector<vector<float> > *trkSCT_SCT_outlier_locX;
   vector<vector<float> > *trkSCT_SCT_outlier_locY;
   vector<vector<float> > *trkSCT_SCT_outlier_incidencePhi;
   vector<vector<float> > *trkSCT_SCT_outlier_incidenceTheta;
   vector<vector<float> > *trkSCT_SCT_outlier_err_locX;
   vector<vector<float> > *trkSCT_SCT_outlier_err_locY;
   vector<vector<float> > *trkSCT_SCT_outlier_cov_locXY;
   vector<vector<float> > *trkSCT_SCT_outlier_x;
   vector<vector<float> > *trkSCT_SCT_outlier_y;
   vector<vector<float> > *trkSCT_SCT_outlier_z;
   vector<vector<float> > *trkSCT_SCT_outlier_trkLocX;
   vector<vector<float> > *trkSCT_SCT_outlier_trkLocY;
   vector<vector<float> > *trkSCT_SCT_outlier_err_trkLocX;
   vector<vector<float> > *trkSCT_SCT_outlier_err_trkLocY;
   vector<vector<float> > *trkSCT_SCT_outlier_cov_trkLocXY;
   vector<vector<float> > *trkSCT_SCT_outlier_chi2;
   vector<vector<int> > *trkSCT_SCT_outlier_ndof;
   vector<int>     *trkSCT_TRT_outlier_n;
   vector<vector<unsigned int> > *trkSCT_TRT_outlier_id;
   vector<vector<unsigned int> > *trkSCT_TRT_outlier_detElementId;
   vector<vector<int> > *trkSCT_TRT_outlier_detType;
   vector<vector<int> > *trkSCT_TRT_outlier_bec;
   vector<vector<int> > *trkSCT_TRT_outlier_layer;
   vector<vector<int> > *trkSCT_TRT_outlier_isCompetingRIO;
   vector<vector<float> > *trkSCT_TRT_outlier_locR;
   vector<vector<float> > *trkSCT_TRT_outlier_err_locR;
   vector<vector<float> > *trkSCT_TRT_outlier_trkLocR;
   vector<vector<float> > *trkSCT_TRT_outlier_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_outlier_err_trkLocR;
   vector<vector<float> > *trkSCT_TRT_outlier_err_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_outlier_cov_trkLocRPhi;
   vector<vector<float> > *trkSCT_TRT_outlier_TOT;
   vector<vector<int> > *trkSCT_TRT_outlier_highLevel;
   vector<vector<float> > *trkSCT_TRT_outlier_trailingEdge;
   vector<vector<float> > *trkSCT_TRT_outlier_chi2;
   vector<vector<int> > *trkSCT_TRT_outlier_ndof;
   vector<int>     *trkSCT_Pixel_hole_n;
   vector<vector<unsigned int> > *trkSCT_Pixel_hole_detElementId;
   vector<vector<int> > *trkSCT_Pixel_hole_bec;
   vector<vector<int> > *trkSCT_Pixel_hole_layer;
   vector<vector<float> > *trkSCT_Pixel_hole_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_hole_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_hole_err_trkLocX;
   vector<vector<float> > *trkSCT_Pixel_hole_err_trkLocY;
   vector<vector<float> > *trkSCT_Pixel_hole_cov_trkLocXY;
   vector<int>     *trkSCT_SCT_hole_n;
   vector<vector<unsigned int> > *trkSCT_SCT_hole_detElementId;
   vector<vector<int> > *trkSCT_SCT_hole_bec;
   vector<vector<int> > *trkSCT_SCT_hole_layer;
   vector<vector<float> > *trkSCT_SCT_hole_trkLocX;
   vector<vector<float> > *trkSCT_SCT_hole_trkLocY;
   vector<vector<float> > *trkSCT_SCT_hole_err_trkLocX;
   vector<vector<float> > *trkSCT_SCT_hole_err_trkLocY;
   vector<vector<float> > *trkSCT_SCT_hole_cov_trkLocXY;
   vector<int>     *trkSCT_TRT_hole_n;
   vector<vector<unsigned int> > *trkSCT_TRT_hole_detElementId;
   vector<vector<int> > *trkSCT_TRT_hole_bec;
   vector<vector<int> > *trkSCT_TRT_hole_layer;
   vector<vector<float> > *trkSCT_TRT_hole_trkLocR;
   vector<vector<float> > *trkSCT_TRT_hole_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_hole_err_trkLocR;
   vector<vector<float> > *trkSCT_TRT_hole_err_trkLocPhi;
   vector<vector<float> > *trkSCT_TRT_hole_cov_trkLocRPhi;
   Int_t           trkTRT_n;
   vector<float>   *trkTRT_d0;
   vector<float>   *trkTRT_z0;
   vector<float>   *trkTRT_phi;
   vector<float>   *trkTRT_theta;
   vector<float>   *trkTRT_qoverp;
   vector<float>   *trkTRT_pt;
   vector<float>   *trkTRT_eta;
   vector<float>   *trkTRT_err_d0;
   vector<float>   *trkTRT_err_z0;
   vector<float>   *trkTRT_err_phi;
   vector<float>   *trkTRT_err_theta;
   vector<float>   *trkTRT_err_qoverp;
   vector<float>   *trkTRT_cov_d0_z0;
   vector<float>   *trkTRT_cov_d0_phi;
   vector<float>   *trkTRT_cov_d0_theta;
   vector<float>   *trkTRT_cov_d0_qoverp;
   vector<float>   *trkTRT_cov_z0_phi;
   vector<float>   *trkTRT_cov_z0_theta;
   vector<float>   *trkTRT_cov_z0_qoverp;
   vector<float>   *trkTRT_cov_phi_theta;
   vector<float>   *trkTRT_cov_phi_qoverp;
   vector<float>   *trkTRT_cov_theta_qoverp;
   vector<float>   *trkTRT_d0_wrtPV;
   vector<float>   *trkTRT_z0_wrtPV;
   vector<float>   *trkTRT_phi_wrtPV;
   vector<float>   *trkTRT_err_d0_wrtPV;
   vector<float>   *trkTRT_err_z0_wrtPV;
   vector<float>   *trkTRT_err_phi_wrtPV;
   vector<float>   *trkTRT_err_theta_wrtPV;
   vector<float>   *trkTRT_err_qoverp_wrtPV;
   vector<float>   *trkTRT_cov_d0_z0_wrtPV;
   vector<float>   *trkTRT_cov_d0_phi_wrtPV;
   vector<float>   *trkTRT_cov_d0_theta_wrtPV;
   vector<float>   *trkTRT_cov_d0_qoverp_wrtPV;
   vector<float>   *trkTRT_cov_z0_phi_wrtPV;
   vector<float>   *trkTRT_cov_z0_theta_wrtPV;
   vector<float>   *trkTRT_cov_z0_qoverp_wrtPV;
   vector<float>   *trkTRT_cov_phi_theta_wrtPV;
   vector<float>   *trkTRT_cov_phi_qoverp_wrtPV;
   vector<float>   *trkTRT_cov_theta_qoverp_wrtPV;
   vector<float>   *trkTRT_d0_wrtBS;
   vector<float>   *trkTRT_z0_wrtBS;
   vector<float>   *trkTRT_phi_wrtBS;
   vector<float>   *trkTRT_err_d0_wrtBS;
   vector<float>   *trkTRT_err_z0_wrtBS;
   vector<float>   *trkTRT_err_phi_wrtBS;
   vector<float>   *trkTRT_err_theta_wrtBS;
   vector<float>   *trkTRT_err_qoverp_wrtBS;
   vector<float>   *trkTRT_cov_d0_z0_wrtBS;
   vector<float>   *trkTRT_cov_d0_phi_wrtBS;
   vector<float>   *trkTRT_cov_d0_theta_wrtBS;
   vector<float>   *trkTRT_cov_d0_qoverp_wrtBS;
   vector<float>   *trkTRT_cov_z0_phi_wrtBS;
   vector<float>   *trkTRT_cov_z0_theta_wrtBS;
   vector<float>   *trkTRT_cov_z0_qoverp_wrtBS;
   vector<float>   *trkTRT_cov_phi_theta_wrtBS;
   vector<float>   *trkTRT_cov_phi_qoverp_wrtBS;
   vector<float>   *trkTRT_cov_theta_qoverp_wrtBS;
   vector<float>   *trkTRT_d0_wrtBL;
   vector<float>   *trkTRT_z0_wrtBL;
   vector<float>   *trkTRT_phi_wrtBL;
   vector<float>   *trkTRT_d0_err_wrtBL;
   vector<float>   *trkTRT_z0_err_wrtBL;
   vector<float>   *trkTRT_phi_err_wrtBL;
   vector<float>   *trkTRT_theta_err_wrtBL;
   vector<float>   *trkTRT_qoverp_err_wrtBL;
   vector<float>   *trkTRT_d0_z0_err_wrtBL;
   vector<float>   *trkTRT_d0_phi_err_wrtBL;
   vector<float>   *trkTRT_d0_theta_err_wrtBL;
   vector<float>   *trkTRT_d0_qoverp_err_wrtBL;
   vector<float>   *trkTRT_z0_phi_err_wrtBL;
   vector<float>   *trkTRT_z0_theta_err_wrtBL;
   vector<float>   *trkTRT_z0_qoverp_err_wrtBL;
   vector<float>   *trkTRT_phi_theta_err_wrtBL;
   vector<float>   *trkTRT_phi_qoverp_err_wrtBL;
   vector<float>   *trkTRT_theta_qoverp_err_wrtBL;
   vector<float>   *trkTRT_chi2;
   vector<int>     *trkTRT_ndof;
   vector<int>     *trkTRT_nBLHits;
   vector<int>     *trkTRT_nPixHits;
   vector<int>     *trkTRT_nSCTHits;
   vector<int>     *trkTRT_nTRTHits;
   vector<int>     *trkTRT_nTRTHighTHits;
   vector<int>     *trkTRT_nTRTXenonHits;
   vector<int>     *trkTRT_nPixHoles;
   vector<int>     *trkTRT_nSCTHoles;
   vector<int>     *trkTRT_nTRTHoles;
   vector<int>     *trkTRT_nPixelDeadSensors;
   vector<int>     *trkTRT_nSCTDeadSensors;
   vector<int>     *trkTRT_nBLSharedHits;
   vector<int>     *trkTRT_nPixSharedHits;
   vector<int>     *trkTRT_nSCTSharedHits;
   vector<int>     *trkTRT_nBLayerSplitHits;
   vector<int>     *trkTRT_nPixSplitHits;
   vector<int>     *trkTRT_nBLayerOutliers;
   vector<int>     *trkTRT_nPixelOutliers;
   vector<int>     *trkTRT_nSCTOutliers;
   vector<int>     *trkTRT_nTRTOutliers;
   vector<int>     *trkTRT_nTRTHighTOutliers;
   vector<int>     *trkTRT_expectBLayerHit;
   vector<int>     *trkTRT_nHits;
   vector<int>     *trkTRT_nHoles;
   vector<int>     *trkTRT_hitPattern;
   vector<float>   *trkTRT_pixeldEdx;
   vector<int>     *trkTRT_nGoodHitsPixeldEdx;
   vector<float>   *trkTRT_massPixeldEdx;
   vector<vector<float> > *trkTRT_likelihoodsPixeldEdx;
   vector<int>     *trkTRT_fitter;
   vector<int>     *trkTRT_patternReco1;
   vector<int>     *trkTRT_patternReco2;
   vector<int>     *trkTRT_trackProperties;
   vector<int>     *trkTRT_particleHypothesis;
   vector<vector<float> > *trkTRT_blayerPrediction_x;
   vector<vector<float> > *trkTRT_blayerPrediction_y;
   vector<vector<float> > *trkTRT_blayerPrediction_z;
   vector<vector<float> > *trkTRT_blayerPrediction_locX;
   vector<vector<float> > *trkTRT_blayerPrediction_locY;
   vector<vector<float> > *trkTRT_blayerPrediction_err_locX;
   vector<vector<float> > *trkTRT_blayerPrediction_err_locY;
   vector<vector<float> > *trkTRT_blayerPrediction_etaDistToEdge;
   vector<vector<float> > *trkTRT_blayerPrediction_phiDistToEdge;
   vector<vector<unsigned int> > *trkTRT_blayerPrediction_detElementId;
   vector<vector<int> > *trkTRT_blayerPrediction_row;
   vector<vector<int> > *trkTRT_blayerPrediction_col;
   vector<vector<int> > *trkTRT_blayerPrediction_type;
   vector<int>     *trkTRT_Pixel_hit_n;
   vector<vector<unsigned int> > *trkTRT_Pixel_hit_id;
   vector<vector<unsigned int> > *trkTRT_Pixel_hit_detElementId;
   vector<vector<int> > *trkTRT_Pixel_hit_detType;
   vector<vector<int> > *trkTRT_Pixel_hit_bec;
   vector<vector<int> > *trkTRT_Pixel_hit_layer;
   vector<vector<float> > *trkTRT_Pixel_hit_charge;
   vector<vector<int> > *trkTRT_Pixel_hit_sizePhi;
   vector<vector<int> > *trkTRT_Pixel_hit_sizeZ;
   vector<vector<int> > *trkTRT_Pixel_hit_size;
   vector<vector<int> > *trkTRT_Pixel_hit_isFake;
   vector<vector<int> > *trkTRT_Pixel_hit_isGanged;
   vector<vector<int> > *trkTRT_Pixel_hit_isSplit;
   vector<vector<float> > *trkTRT_Pixel_hit_splitProb1;
   vector<vector<float> > *trkTRT_Pixel_hit_splitProb2;
   vector<vector<int> > *trkTRT_Pixel_hit_isCompetingRIO;
   vector<vector<float> > *trkTRT_Pixel_hit_locX;
   vector<vector<float> > *trkTRT_Pixel_hit_locY;
   vector<vector<float> > *trkTRT_Pixel_hit_incidencePhi;
   vector<vector<float> > *trkTRT_Pixel_hit_incidenceTheta;
   vector<vector<float> > *trkTRT_Pixel_hit_err_locX;
   vector<vector<float> > *trkTRT_Pixel_hit_err_locY;
   vector<vector<float> > *trkTRT_Pixel_hit_cov_locXY;
   vector<vector<float> > *trkTRT_Pixel_hit_x;
   vector<vector<float> > *trkTRT_Pixel_hit_y;
   vector<vector<float> > *trkTRT_Pixel_hit_z;
   vector<vector<float> > *trkTRT_Pixel_hit_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_hit_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_hit_err_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_hit_err_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_hit_cov_trkLocXY;
   vector<vector<float> > *trkTRT_Pixel_hit_chi2;
   vector<vector<int> > *trkTRT_Pixel_hit_ndof;
   vector<int>     *trkTRT_SCT_hit_n;
   vector<vector<unsigned int> > *trkTRT_SCT_hit_id;
   vector<vector<unsigned int> > *trkTRT_SCT_hit_detElementId;
   vector<vector<int> > *trkTRT_SCT_hit_detType;
   vector<vector<int> > *trkTRT_SCT_hit_bec;
   vector<vector<int> > *trkTRT_SCT_hit_layer;
   vector<vector<int> > *trkTRT_SCT_hit_sizePhi;
   vector<vector<int> > *trkTRT_SCT_hit_isCompetingRIO;
   vector<vector<float> > *trkTRT_SCT_hit_locX;
   vector<vector<float> > *trkTRT_SCT_hit_locY;
   vector<vector<float> > *trkTRT_SCT_hit_incidencePhi;
   vector<vector<float> > *trkTRT_SCT_hit_incidenceTheta;
   vector<vector<float> > *trkTRT_SCT_hit_err_locX;
   vector<vector<float> > *trkTRT_SCT_hit_err_locY;
   vector<vector<float> > *trkTRT_SCT_hit_cov_locXY;
   vector<vector<float> > *trkTRT_SCT_hit_x;
   vector<vector<float> > *trkTRT_SCT_hit_y;
   vector<vector<float> > *trkTRT_SCT_hit_z;
   vector<vector<float> > *trkTRT_SCT_hit_trkLocX;
   vector<vector<float> > *trkTRT_SCT_hit_trkLocY;
   vector<vector<float> > *trkTRT_SCT_hit_err_trkLocX;
   vector<vector<float> > *trkTRT_SCT_hit_err_trkLocY;
   vector<vector<float> > *trkTRT_SCT_hit_cov_trkLocXY;
   vector<vector<float> > *trkTRT_SCT_hit_chi2;
   vector<vector<int> > *trkTRT_SCT_hit_ndof;
   vector<int>     *trkTRT_TRT_hit_n;
   vector<vector<unsigned int> > *trkTRT_TRT_hit_id;
   vector<vector<unsigned int> > *trkTRT_TRT_hit_detElementId;
   vector<vector<int> > *trkTRT_TRT_hit_detType;
   vector<vector<int> > *trkTRT_TRT_hit_bec;
   vector<vector<int> > *trkTRT_TRT_hit_layer;
   vector<vector<int> > *trkTRT_TRT_hit_isCompetingRIO;
   vector<vector<float> > *trkTRT_TRT_hit_locR;
   vector<vector<float> > *trkTRT_TRT_hit_err_locR;
   vector<vector<float> > *trkTRT_TRT_hit_trkLocR;
   vector<vector<float> > *trkTRT_TRT_hit_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_hit_err_trkLocR;
   vector<vector<float> > *trkTRT_TRT_hit_err_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_hit_cov_trkLocRPhi;
   vector<vector<float> > *trkTRT_TRT_hit_TOT;
   vector<vector<int> > *trkTRT_TRT_hit_highLevel;
   vector<vector<float> > *trkTRT_TRT_hit_trailingEdge;
   vector<vector<float> > *trkTRT_TRT_hit_chi2;
   vector<vector<int> > *trkTRT_TRT_hit_ndof;
   vector<int>     *trkTRT_Pixel_outlier_n;
   vector<vector<unsigned int> > *trkTRT_Pixel_outlier_id;
   vector<vector<unsigned int> > *trkTRT_Pixel_outlier_detElementId;
   vector<vector<int> > *trkTRT_Pixel_outlier_detType;
   vector<vector<int> > *trkTRT_Pixel_outlier_bec;
   vector<vector<int> > *trkTRT_Pixel_outlier_layer;
   vector<vector<float> > *trkTRT_Pixel_outlier_charge;
   vector<vector<int> > *trkTRT_Pixel_outlier_sizePhi;
   vector<vector<int> > *trkTRT_Pixel_outlier_sizeZ;
   vector<vector<int> > *trkTRT_Pixel_outlier_size;
   vector<vector<int> > *trkTRT_Pixel_outlier_isFake;
   vector<vector<int> > *trkTRT_Pixel_outlier_isGanged;
   vector<vector<int> > *trkTRT_Pixel_outlier_isSplit;
   vector<vector<float> > *trkTRT_Pixel_outlier_splitProb1;
   vector<vector<float> > *trkTRT_Pixel_outlier_splitProb2;
   vector<vector<int> > *trkTRT_Pixel_outlier_isCompetingRIO;
   vector<vector<float> > *trkTRT_Pixel_outlier_locX;
   vector<vector<float> > *trkTRT_Pixel_outlier_locY;
   vector<vector<float> > *trkTRT_Pixel_outlier_incidencePhi;
   vector<vector<float> > *trkTRT_Pixel_outlier_incidenceTheta;
   vector<vector<float> > *trkTRT_Pixel_outlier_err_locX;
   vector<vector<float> > *trkTRT_Pixel_outlier_err_locY;
   vector<vector<float> > *trkTRT_Pixel_outlier_cov_locXY;
   vector<vector<float> > *trkTRT_Pixel_outlier_x;
   vector<vector<float> > *trkTRT_Pixel_outlier_y;
   vector<vector<float> > *trkTRT_Pixel_outlier_z;
   vector<vector<float> > *trkTRT_Pixel_outlier_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_outlier_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_outlier_err_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_outlier_err_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_outlier_cov_trkLocXY;
   vector<vector<float> > *trkTRT_Pixel_outlier_chi2;
   vector<vector<int> > *trkTRT_Pixel_outlier_ndof;
   vector<int>     *trkTRT_SCT_outlier_n;
   vector<vector<unsigned int> > *trkTRT_SCT_outlier_id;
   vector<vector<unsigned int> > *trkTRT_SCT_outlier_detElementId;
   vector<vector<int> > *trkTRT_SCT_outlier_detType;
   vector<vector<int> > *trkTRT_SCT_outlier_bec;
   vector<vector<int> > *trkTRT_SCT_outlier_layer;
   vector<vector<int> > *trkTRT_SCT_outlier_sizePhi;
   vector<vector<int> > *trkTRT_SCT_outlier_isCompetingRIO;
   vector<vector<float> > *trkTRT_SCT_outlier_locX;
   vector<vector<float> > *trkTRT_SCT_outlier_locY;
   vector<vector<float> > *trkTRT_SCT_outlier_incidencePhi;
   vector<vector<float> > *trkTRT_SCT_outlier_incidenceTheta;
   vector<vector<float> > *trkTRT_SCT_outlier_err_locX;
   vector<vector<float> > *trkTRT_SCT_outlier_err_locY;
   vector<vector<float> > *trkTRT_SCT_outlier_cov_locXY;
   vector<vector<float> > *trkTRT_SCT_outlier_x;
   vector<vector<float> > *trkTRT_SCT_outlier_y;
   vector<vector<float> > *trkTRT_SCT_outlier_z;
   vector<vector<float> > *trkTRT_SCT_outlier_trkLocX;
   vector<vector<float> > *trkTRT_SCT_outlier_trkLocY;
   vector<vector<float> > *trkTRT_SCT_outlier_err_trkLocX;
   vector<vector<float> > *trkTRT_SCT_outlier_err_trkLocY;
   vector<vector<float> > *trkTRT_SCT_outlier_cov_trkLocXY;
   vector<vector<float> > *trkTRT_SCT_outlier_chi2;
   vector<vector<int> > *trkTRT_SCT_outlier_ndof;
   vector<int>     *trkTRT_TRT_outlier_n;
   vector<vector<unsigned int> > *trkTRT_TRT_outlier_id;
   vector<vector<unsigned int> > *trkTRT_TRT_outlier_detElementId;
   vector<vector<int> > *trkTRT_TRT_outlier_detType;
   vector<vector<int> > *trkTRT_TRT_outlier_bec;
   vector<vector<int> > *trkTRT_TRT_outlier_layer;
   vector<vector<int> > *trkTRT_TRT_outlier_isCompetingRIO;
   vector<vector<float> > *trkTRT_TRT_outlier_locR;
   vector<vector<float> > *trkTRT_TRT_outlier_err_locR;
   vector<vector<float> > *trkTRT_TRT_outlier_trkLocR;
   vector<vector<float> > *trkTRT_TRT_outlier_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_outlier_err_trkLocR;
   vector<vector<float> > *trkTRT_TRT_outlier_err_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_outlier_cov_trkLocRPhi;
   vector<vector<float> > *trkTRT_TRT_outlier_TOT;
   vector<vector<int> > *trkTRT_TRT_outlier_highLevel;
   vector<vector<float> > *trkTRT_TRT_outlier_trailingEdge;
   vector<vector<float> > *trkTRT_TRT_outlier_chi2;
   vector<vector<int> > *trkTRT_TRT_outlier_ndof;
   vector<int>     *trkTRT_Pixel_hole_n;
   vector<vector<unsigned int> > *trkTRT_Pixel_hole_detElementId;
   vector<vector<int> > *trkTRT_Pixel_hole_bec;
   vector<vector<int> > *trkTRT_Pixel_hole_layer;
   vector<vector<float> > *trkTRT_Pixel_hole_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_hole_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_hole_err_trkLocX;
   vector<vector<float> > *trkTRT_Pixel_hole_err_trkLocY;
   vector<vector<float> > *trkTRT_Pixel_hole_cov_trkLocXY;
   vector<int>     *trkTRT_SCT_hole_n;
   vector<vector<unsigned int> > *trkTRT_SCT_hole_detElementId;
   vector<vector<int> > *trkTRT_SCT_hole_bec;
   vector<vector<int> > *trkTRT_SCT_hole_layer;
   vector<vector<float> > *trkTRT_SCT_hole_trkLocX;
   vector<vector<float> > *trkTRT_SCT_hole_trkLocY;
   vector<vector<float> > *trkTRT_SCT_hole_err_trkLocX;
   vector<vector<float> > *trkTRT_SCT_hole_err_trkLocY;
   vector<vector<float> > *trkTRT_SCT_hole_cov_trkLocXY;
   vector<int>     *trkTRT_TRT_hole_n;
   vector<vector<unsigned int> > *trkTRT_TRT_hole_detElementId;
   vector<vector<int> > *trkTRT_TRT_hole_bec;
   vector<vector<int> > *trkTRT_TRT_hole_layer;
   vector<vector<float> > *trkTRT_TRT_hole_trkLocR;
   vector<vector<float> > *trkTRT_TRT_hole_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_hole_err_trkLocR;
   vector<vector<float> > *trkTRT_TRT_hole_err_trkLocPhi;
   vector<vector<float> > *trkTRT_TRT_hole_cov_trkLocRPhi;
   Int_t           v0_n;
   vector<float>   *v0_ksMass;
   vector<float>   *v0_lambda1Mass;
   vector<float>   *v0_lambda2Mass;
   vector<float>   *v0_vertexProb;
   vector<float>   *v0_vertexChi2;
   vector<float>   *v0_ksPt;
   vector<float>   *v0_ksPx;
   vector<float>   *v0_ksPy;
   vector<float>   *v0_ksEta;
   vector<float>   *v0_ksPhi;
   vector<float>   *v0_ksMomentum;
   vector<float>   *v0_flightX;
   vector<float>   *v0_flightY;
   vector<float>   *v0_cosThetaPointing;
   vector<float>   *v0_totalFlightDistance;
   vector<float>   *v0_properDecayTime;
   vector<float>   *v0_properFlightDist;
   vector<float>   *v0_flightX_BS;
   vector<float>   *v0_flightY_BS;
   vector<float>   *v0_cosThetaPointing_BS;
   vector<float>   *v0_totalFlightDistance_BS;
   vector<float>   *v0_properDecayTime_BS;
   vector<float>   *v0_properFlightDist_BS;
   vector<float>   *v0_radius;
   vector<float>   *v0_thetaPiPlus;
   vector<float>   *v0_thetaPiMinus;
   vector<vector<float> > *v0_trk_L;
   vector<vector<float> > *v0_trk_T;
   vector<float>   *v0_thetaStarPiPlus;
   vector<float>   *v0_thetaStarPiMinus;
   vector<vector<float> > *v0_trkPt_SV;
   vector<vector<float> > *v0_trkEta_SV;
   vector<vector<float> > *v0_trkPhi_SV;
   vector<float>   *v0_x;
   vector<float>   *v0_y;
   vector<float>   *v0_z;
   vector<float>   *v0_err_x;
   vector<float>   *v0_err_y;
   vector<float>   *v0_err_z;
   vector<float>   *v0_cov_xy;
   vector<float>   *v0_cov_xz;
   vector<float>   *v0_cov_yz;
   vector<int>     *v0_type;
   vector<float>   *v0_chi2;
   vector<int>     *v0_ndof;
   vector<float>   *v0_px;
   vector<float>   *v0_py;
   vector<float>   *v0_pz;
   vector<float>   *v0_E;
   vector<float>   *v0_m;
   vector<int>     *v0_nTracks;
   vector<float>   *v0_sumPt;
   vector<vector<float> > *v0_trk_weight;
   vector<int>     *v0_trk_n;
   vector<vector<int> > *v0_trk_index;
   Int_t           secVx_n;
   vector<float>   *secVx_x;
   vector<float>   *secVx_y;
   vector<float>   *secVx_z;
   vector<float>   *secVx_err_x;
   vector<float>   *secVx_err_y;
   vector<float>   *secVx_err_z;
   vector<float>   *secVx_cov_xy;
   vector<float>   *secVx_cov_xz;
   vector<float>   *secVx_cov_yz;
   vector<int>     *secVx_type;
   vector<float>   *secVx_chi2;
   vector<int>     *secVx_ndof;
   vector<float>   *secVx_px;
   vector<float>   *secVx_py;
   vector<float>   *secVx_pz;
   vector<float>   *secVx_E;
   vector<float>   *secVx_m;
   vector<int>     *secVx_nTracks;
   vector<float>   *secVx_sumPt;
   vector<vector<float> > *secVx_trk_weight;
   vector<int>     *secVx_trk_n;
   vector<vector<int> > *secVx_trk_index;
   Int_t           lucidRaw_word0;
   Int_t           lucidRaw_word1;
   Int_t           lucidRaw_word2;
   Int_t           lucidRaw_word3;
   Int_t           lucidRaw_word0p;
   Int_t           lucidRaw_word1p;
   Int_t           lucidRaw_word2p;
   Int_t           lucidRaw_word3p;
   Int_t           lucidRaw_word0n;
   Int_t           lucidRaw_word1n;
   Int_t           lucidRaw_word2n;
   Int_t           lucidRaw_word3n;
   Int_t           lucidRaw_status;
   Int_t           lucidRaw_totalHits;
   Int_t           lucidRaw_ASideHits;
   Int_t           lucidRaw_CSideHits;
   Int_t           Zdc_n;
   vector<vector<float> > *Zdc_Energy_Vec;
   vector<vector<float> > *Zdc_Time_Vec;
   vector<int>     *Zdc_Vec_Size;
   vector<float>   *Zdc_Energy_LG;
   vector<float>   *Zdc_Time_LG;
   vector<float>   *Zdc_Energy_HG;
   vector<float>   *Zdc_Time_HG;
   vector<unsigned int> *Zdc_Id;
   vector<int>     *Zdc_Side;
   vector<int>     *Zdc_Type;
   vector<int>     *Zdc_Module;
   vector<int>     *Zdc_Channel;
   vector<float>   *Zdc_TimeCalib;
   vector<unsigned int> *Zdc_RecMethod;
   Int_t           ZdcDigits_n;
   vector<vector<int> > *ZdcDigits_dig_g0d0;
   vector<vector<int> > *ZdcDigits_dig_g0d1;
   vector<vector<int> > *ZdcDigits_dig_g1d0;
   vector<vector<int> > *ZdcDigits_dig_g1d1;
   vector<unsigned int> *ZdcDigits_Id;
   vector<int>     *ZdcDigits_Side;
   vector<int>     *ZdcDigits_Type;
   vector<int>     *ZdcDigits_Module;
   vector<int>     *ZdcDigits_Channel;
   Float_t         mbtime_timeDiff;
   Float_t         mbtime_timeA;
   Float_t         mbtime_timeC;
   Int_t           mbtime_countA;
   Int_t           mbtime_countC;
   Bool_t          bkgword_MBTSTimeHaloBit;
   Bool_t          bkgword_MBTSTimeColBit;
   Bool_t          bkgword_LArECTimeHaloBit;
   Bool_t          bkgword_LArECTimeColBit;
   Bool_t          bkgword_PixMultiHugeBit;
   Bool_t          bkgword_PixSPNonEmptyBit;
   Bool_t          bkgword_SCTMultiHugeBit;
   Bool_t          bkgword_SCTSPNonEmptyBit;
   Bool_t          bkgword_CSCTimeHaloBit;
   Bool_t          bkgword_CSCTimeColBit;
   Bool_t          bkgword_BCMTimeHaloBit;
   Bool_t          bkgword_BCMTimeColBit;
   Bool_t          bkgword_MuonTimingColBit;
   Bool_t          bkgword_MuonTimingCosmicBit;
   Bool_t          bkgword_MBTSBeamVetoBit;
   Bool_t          bkgword_BCMBeamVetoBit;
   Bool_t          bkgword_LUCIDBeamVetoBit;
   Bool_t          bkgword_HaloMuonSegment;
   Bool_t          bkgword_HaloClusterShape;
   Bool_t          bkgword_HaloMuonOneSided;
   Bool_t          bkgword_HaloMuonTwoSided;
   Bool_t          bkgword_HaloTileClusterPattern;
   Bool_t          bkgword_BeamGasPixel;
   Bool_t          bkgword_CosmicStandAlone;
   Bool_t          bkgword_CosmicStandAloneTight;
   Bool_t          bkgword_CosmicCombined;
   Bool_t          bkgword_CosmicCombinedTight;
   Bool_t          bkgword_BkgdResvBit1;
   Bool_t          bkgword_BkgdResvBit2;
   Bool_t          bkgword_BkgdResvBit3;
   Bool_t          bkgword_BkgdResvBit4;
   Bool_t          bkgword_BkgdResvBit5;
   UInt_t          bkgword_BkgWord;
   Int_t           vxbc_n;
   vector<float>   *vxbc_x;
   vector<float>   *vxbc_y;
   vector<float>   *vxbc_z;
   vector<float>   *vxbc_err_x;
   vector<float>   *vxbc_err_y;
   vector<float>   *vxbc_err_z;
   vector<float>   *vxbc_cov_xy;
   vector<float>   *vxbc_cov_xz;
   vector<float>   *vxbc_cov_yz;
   vector<int>     *vxbc_type;
   vector<float>   *vxbc_chi2;
   vector<int>     *vxbc_ndof;
   vector<float>   *vxbc_px;
   vector<float>   *vxbc_py;
   vector<float>   *vxbc_pz;
   vector<float>   *vxbc_E;
   vector<float>   *vxbc_m;
   vector<int>     *vxbc_nTracks;
   vector<float>   *vxbc_sumPt;
   vector<vector<float> > *vxbc_trk_weight;
   vector<int>     *vxbc_trk_n;
   vector<vector<int> > *vxbc_trk_index;
   Int_t           cl_had_n;
   vector<float>   *cl_had_E;
   vector<float>   *cl_had_pt;
   vector<float>   *cl_had_eta;
   vector<float>   *cl_had_phi;
   vector<float>   *cl_had_E_em;
   vector<float>   *cl_had_E_had;
   vector<float>   *cl_had_center_lambda;
   vector<float>   *cl_had_lateral;
   vector<float>   *cl_had_longitudinal;
   vector<float>   *cl_had_isolation;
   vector<float>   *cl_had_significance;
   vector<float>   *cl_had_cellSignificance;
   vector<float>   *cl_had_cellSigSampling;
   Int_t           cl_em_n;
   vector<float>   *cl_em_E;
   vector<float>   *cl_em_pt;
   vector<float>   *cl_em_eta;
   vector<float>   *cl_em_phi;
   vector<float>   *cl_em_E_em;
   vector<float>   *cl_em_E_had;

   // List of branches
   TBranch        *b_RunNumber;   //!
   TBranch        *b_EventNumber;   //!
   TBranch        *b_timestamp;   //!
   TBranch        *b_timestamp_ns;   //!
   TBranch        *b_lbn;   //!
   TBranch        *b_bcid;   //!
   TBranch        *b_detmask0;   //!
   TBranch        *b_detmask1;   //!
   TBranch        *b_actualIntPerXing;   //!
   TBranch        *b_averageIntPerXing;   //!
   TBranch        *b_pixelFlags;   //!
   TBranch        *b_sctFlags;   //!
   TBranch        *b_trtFlags;   //!
   TBranch        *b_larFlags;   //!
   TBranch        *b_tileFlags;   //!
   TBranch        *b_muonFlags;   //!
   TBranch        *b_fwdFlags;   //!
   TBranch        *b_coreFlags;   //!
   TBranch        *b_pixelError;   //!
   TBranch        *b_sctError;   //!
   TBranch        *b_trtError;   //!
   TBranch        *b_larError;   //!
   TBranch        *b_tileError;   //!
   TBranch        *b_muonError;   //!
   TBranch        *b_fwdError;   //!
   TBranch        *b_coreError;   //!
   TBranch        *b_streamDecision_Egamma;   //!
   TBranch        *b_streamDecision_Muons;   //!
   TBranch        *b_streamDecision_JetTauEtmiss;   //!
   TBranch        *b_l1id;   //!
   TBranch        *b_isSimulation;   //!
   TBranch        *b_isCalibration;   //!
   TBranch        *b_isTestBeam;   //!
   TBranch        *b_trk_n;   //!
   TBranch        *b_trk_d0;   //!
   TBranch        *b_trk_z0;   //!
   TBranch        *b_trk_phi;   //!
   TBranch        *b_trk_theta;   //!
   TBranch        *b_trk_qoverp;   //!
   TBranch        *b_trk_pt;   //!
   TBranch        *b_trk_eta;   //!
   TBranch        *b_trk_err_d0;   //!
   TBranch        *b_trk_err_z0;   //!
   TBranch        *b_trk_err_phi;   //!
   TBranch        *b_trk_err_theta;   //!
   TBranch        *b_trk_err_qoverp;   //!
   TBranch        *b_trk_cov_d0_z0;   //!
   TBranch        *b_trk_cov_d0_phi;   //!
   TBranch        *b_trk_cov_d0_theta;   //!
   TBranch        *b_trk_cov_d0_qoverp;   //!
   TBranch        *b_trk_cov_z0_phi;   //!
   TBranch        *b_trk_cov_z0_theta;   //!
   TBranch        *b_trk_cov_z0_qoverp;   //!
   TBranch        *b_trk_cov_phi_theta;   //!
   TBranch        *b_trk_cov_phi_qoverp;   //!
   TBranch        *b_trk_cov_theta_qoverp;   //!
   TBranch        *b_trk_d0_wrtPV;   //!
   TBranch        *b_trk_z0_wrtPV;   //!
   TBranch        *b_trk_phi_wrtPV;   //!
   TBranch        *b_trk_err_d0_wrtPV;   //!
   TBranch        *b_trk_err_z0_wrtPV;   //!
   TBranch        *b_trk_err_phi_wrtPV;   //!
   TBranch        *b_trk_err_theta_wrtPV;   //!
   TBranch        *b_trk_err_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trk_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trk_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trk_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trk_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trk_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trk_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trk_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trk_d0_wrtBS;   //!
   TBranch        *b_trk_z0_wrtBS;   //!
   TBranch        *b_trk_phi_wrtBS;   //!
   TBranch        *b_trk_err_d0_wrtBS;   //!
   TBranch        *b_trk_err_z0_wrtBS;   //!
   TBranch        *b_trk_err_phi_wrtBS;   //!
   TBranch        *b_trk_err_theta_wrtBS;   //!
   TBranch        *b_trk_err_qoverp_wrtBS;   //!
   TBranch        *b_trk_cov_d0_z0_wrtBS;   //!
   TBranch        *b_trk_cov_d0_phi_wrtBS;   //!
   TBranch        *b_trk_cov_d0_theta_wrtBS;   //!
   TBranch        *b_trk_cov_d0_qoverp_wrtBS;   //!
   TBranch        *b_trk_cov_z0_phi_wrtBS;   //!
   TBranch        *b_trk_cov_z0_theta_wrtBS;   //!
   TBranch        *b_trk_cov_z0_qoverp_wrtBS;   //!
   TBranch        *b_trk_cov_phi_theta_wrtBS;   //!
   TBranch        *b_trk_cov_phi_qoverp_wrtBS;   //!
   TBranch        *b_trk_cov_theta_qoverp_wrtBS;   //!
   TBranch        *b_trk_d0_wrtBL;   //!
   TBranch        *b_trk_z0_wrtBL;   //!
   TBranch        *b_trk_phi_wrtBL;   //!
   TBranch        *b_trk_d0_err_wrtBL;   //!
   TBranch        *b_trk_z0_err_wrtBL;   //!
   TBranch        *b_trk_phi_err_wrtBL;   //!
   TBranch        *b_trk_theta_err_wrtBL;   //!
   TBranch        *b_trk_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_d0_z0_err_wrtBL;   //!
   TBranch        *b_trk_d0_phi_err_wrtBL;   //!
   TBranch        *b_trk_d0_theta_err_wrtBL;   //!
   TBranch        *b_trk_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_z0_phi_err_wrtBL;   //!
   TBranch        *b_trk_z0_theta_err_wrtBL;   //!
   TBranch        *b_trk_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_phi_theta_err_wrtBL;   //!
   TBranch        *b_trk_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trk_chi2;   //!
   TBranch        *b_trk_ndof;   //!
   TBranch        *b_trk_nBLHits;   //!
   TBranch        *b_trk_nPixHits;   //!
   TBranch        *b_trk_nSCTHits;   //!
   TBranch        *b_trk_nTRTHits;   //!
   TBranch        *b_trk_nTRTHighTHits;   //!
   TBranch        *b_trk_nTRTXenonHits;   //!
   TBranch        *b_trk_nPixHoles;   //!
   TBranch        *b_trk_nSCTHoles;   //!
   TBranch        *b_trk_nTRTHoles;   //!
   TBranch        *b_trk_nPixelDeadSensors;   //!
   TBranch        *b_trk_nSCTDeadSensors;   //!
   TBranch        *b_trk_nBLSharedHits;   //!
   TBranch        *b_trk_nPixSharedHits;   //!
   TBranch        *b_trk_nSCTSharedHits;   //!
   TBranch        *b_trk_nBLayerSplitHits;   //!
   TBranch        *b_trk_nPixSplitHits;   //!
   TBranch        *b_trk_nBLayerOutliers;   //!
   TBranch        *b_trk_nPixelOutliers;   //!
   TBranch        *b_trk_nSCTOutliers;   //!
   TBranch        *b_trk_nTRTOutliers;   //!
   TBranch        *b_trk_nTRTHighTOutliers;   //!
   TBranch        *b_trk_expectBLayerHit;   //!
   TBranch        *b_trk_nHits;   //!
   TBranch        *b_trk_nHoles;   //!
   TBranch        *b_trk_hitPattern;   //!
   TBranch        *b_trk_pixeldEdx;   //!
   TBranch        *b_trk_nGoodHitsPixeldEdx;   //!
   TBranch        *b_trk_massPixeldEdx;   //!
   TBranch        *b_trk_likelihoodsPixeldEdx;   //!
   TBranch        *b_trk_fitter;   //!
   TBranch        *b_trk_patternReco1;   //!
   TBranch        *b_trk_patternReco2;   //!
   TBranch        *b_trk_trackProperties;   //!
   TBranch        *b_trk_particleHypothesis;   //!
   TBranch        *b_trk_blayerPrediction_x;   //!
   TBranch        *b_trk_blayerPrediction_y;   //!
   TBranch        *b_trk_blayerPrediction_z;   //!
   TBranch        *b_trk_blayerPrediction_locX;   //!
   TBranch        *b_trk_blayerPrediction_locY;   //!
   TBranch        *b_trk_blayerPrediction_err_locX;   //!
   TBranch        *b_trk_blayerPrediction_err_locY;   //!
   TBranch        *b_trk_blayerPrediction_etaDistToEdge;   //!
   TBranch        *b_trk_blayerPrediction_phiDistToEdge;   //!
   TBranch        *b_trk_blayerPrediction_detElementId;   //!
   TBranch        *b_trk_blayerPrediction_row;   //!
   TBranch        *b_trk_blayerPrediction_col;   //!
   TBranch        *b_trk_blayerPrediction_type;   //!
   TBranch        *b_trk_Pixel_hit_n;   //!
   TBranch        *b_trk_Pixel_hit_id;   //!
   TBranch        *b_trk_Pixel_hit_detElementId;   //!
   TBranch        *b_trk_Pixel_hit_detType;   //!
   TBranch        *b_trk_Pixel_hit_bec;   //!
   TBranch        *b_trk_Pixel_hit_layer;   //!
   TBranch        *b_trk_Pixel_hit_charge;   //!
   TBranch        *b_trk_Pixel_hit_sizePhi;   //!
   TBranch        *b_trk_Pixel_hit_sizeZ;   //!
   TBranch        *b_trk_Pixel_hit_size;   //!
   TBranch        *b_trk_Pixel_hit_isFake;   //!
   TBranch        *b_trk_Pixel_hit_isGanged;   //!
   TBranch        *b_trk_Pixel_hit_isSplit;   //!
   TBranch        *b_trk_Pixel_hit_splitProb1;   //!
   TBranch        *b_trk_Pixel_hit_splitProb2;   //!
   TBranch        *b_trk_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trk_Pixel_hit_locX;   //!
   TBranch        *b_trk_Pixel_hit_locY;   //!
   TBranch        *b_trk_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trk_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trk_Pixel_hit_err_locX;   //!
   TBranch        *b_trk_Pixel_hit_err_locY;   //!
   TBranch        *b_trk_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trk_Pixel_hit_x;   //!
   TBranch        *b_trk_Pixel_hit_y;   //!
   TBranch        *b_trk_Pixel_hit_z;   //!
   TBranch        *b_trk_Pixel_hit_trkLocX;   //!
   TBranch        *b_trk_Pixel_hit_trkLocY;   //!
   TBranch        *b_trk_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trk_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trk_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trk_Pixel_hit_chi2;   //!
   TBranch        *b_trk_Pixel_hit_ndof;   //!
   TBranch        *b_trk_SCT_hit_n;   //!
   TBranch        *b_trk_SCT_hit_id;   //!
   TBranch        *b_trk_SCT_hit_detElementId;   //!
   TBranch        *b_trk_SCT_hit_detType;   //!
   TBranch        *b_trk_SCT_hit_bec;   //!
   TBranch        *b_trk_SCT_hit_layer;   //!
   TBranch        *b_trk_SCT_hit_sizePhi;   //!
   TBranch        *b_trk_SCT_hit_isCompetingRIO;   //!
   TBranch        *b_trk_SCT_hit_locX;   //!
   TBranch        *b_trk_SCT_hit_locY;   //!
   TBranch        *b_trk_SCT_hit_incidencePhi;   //!
   TBranch        *b_trk_SCT_hit_incidenceTheta;   //!
   TBranch        *b_trk_SCT_hit_err_locX;   //!
   TBranch        *b_trk_SCT_hit_err_locY;   //!
   TBranch        *b_trk_SCT_hit_cov_locXY;   //!
   TBranch        *b_trk_SCT_hit_x;   //!
   TBranch        *b_trk_SCT_hit_y;   //!
   TBranch        *b_trk_SCT_hit_z;   //!
   TBranch        *b_trk_SCT_hit_trkLocX;   //!
   TBranch        *b_trk_SCT_hit_trkLocY;   //!
   TBranch        *b_trk_SCT_hit_err_trkLocX;   //!
   TBranch        *b_trk_SCT_hit_err_trkLocY;   //!
   TBranch        *b_trk_SCT_hit_cov_trkLocXY;   //!
   TBranch        *b_trk_SCT_hit_chi2;   //!
   TBranch        *b_trk_SCT_hit_ndof;   //!
   TBranch        *b_trk_TRT_hit_n;   //!
   TBranch        *b_trk_TRT_hit_id;   //!
   TBranch        *b_trk_TRT_hit_detElementId;   //!
   TBranch        *b_trk_TRT_hit_detType;   //!
   TBranch        *b_trk_TRT_hit_bec;   //!
   TBranch        *b_trk_TRT_hit_layer;   //!
   TBranch        *b_trk_TRT_hit_isCompetingRIO;   //!
   TBranch        *b_trk_TRT_hit_locR;   //!
   TBranch        *b_trk_TRT_hit_err_locR;   //!
   TBranch        *b_trk_TRT_hit_trkLocR;   //!
   TBranch        *b_trk_TRT_hit_trkLocPhi;   //!
   TBranch        *b_trk_TRT_hit_err_trkLocR;   //!
   TBranch        *b_trk_TRT_hit_err_trkLocPhi;   //!
   TBranch        *b_trk_TRT_hit_cov_trkLocRPhi;   //!
   TBranch        *b_trk_TRT_hit_TOT;   //!
   TBranch        *b_trk_TRT_hit_highLevel;   //!
   TBranch        *b_trk_TRT_hit_trailingEdge;   //!
   TBranch        *b_trk_TRT_hit_chi2;   //!
   TBranch        *b_trk_TRT_hit_ndof;   //!
   TBranch        *b_trk_Pixel_outlier_n;   //!
   TBranch        *b_trk_Pixel_outlier_id;   //!
   TBranch        *b_trk_Pixel_outlier_detElementId;   //!
   TBranch        *b_trk_Pixel_outlier_detType;   //!
   TBranch        *b_trk_Pixel_outlier_bec;   //!
   TBranch        *b_trk_Pixel_outlier_layer;   //!
   TBranch        *b_trk_Pixel_outlier_charge;   //!
   TBranch        *b_trk_Pixel_outlier_sizePhi;   //!
   TBranch        *b_trk_Pixel_outlier_sizeZ;   //!
   TBranch        *b_trk_Pixel_outlier_size;   //!
   TBranch        *b_trk_Pixel_outlier_isFake;   //!
   TBranch        *b_trk_Pixel_outlier_isGanged;   //!
   TBranch        *b_trk_Pixel_outlier_isSplit;   //!
   TBranch        *b_trk_Pixel_outlier_splitProb1;   //!
   TBranch        *b_trk_Pixel_outlier_splitProb2;   //!
   TBranch        *b_trk_Pixel_outlier_isCompetingRIO;   //!
   TBranch        *b_trk_Pixel_outlier_locX;   //!
   TBranch        *b_trk_Pixel_outlier_locY;   //!
   TBranch        *b_trk_Pixel_outlier_incidencePhi;   //!
   TBranch        *b_trk_Pixel_outlier_incidenceTheta;   //!
   TBranch        *b_trk_Pixel_outlier_err_locX;   //!
   TBranch        *b_trk_Pixel_outlier_err_locY;   //!
   TBranch        *b_trk_Pixel_outlier_cov_locXY;   //!
   TBranch        *b_trk_Pixel_outlier_x;   //!
   TBranch        *b_trk_Pixel_outlier_y;   //!
   TBranch        *b_trk_Pixel_outlier_z;   //!
   TBranch        *b_trk_Pixel_outlier_trkLocX;   //!
   TBranch        *b_trk_Pixel_outlier_trkLocY;   //!
   TBranch        *b_trk_Pixel_outlier_err_trkLocX;   //!
   TBranch        *b_trk_Pixel_outlier_err_trkLocY;   //!
   TBranch        *b_trk_Pixel_outlier_cov_trkLocXY;   //!
   TBranch        *b_trk_Pixel_outlier_chi2;   //!
   TBranch        *b_trk_Pixel_outlier_ndof;   //!
   TBranch        *b_trk_SCT_outlier_n;   //!
   TBranch        *b_trk_SCT_outlier_id;   //!
   TBranch        *b_trk_SCT_outlier_detElementId;   //!
   TBranch        *b_trk_SCT_outlier_detType;   //!
   TBranch        *b_trk_SCT_outlier_bec;   //!
   TBranch        *b_trk_SCT_outlier_layer;   //!
   TBranch        *b_trk_SCT_outlier_sizePhi;   //!
   TBranch        *b_trk_SCT_outlier_isCompetingRIO;   //!
   TBranch        *b_trk_SCT_outlier_locX;   //!
   TBranch        *b_trk_SCT_outlier_locY;   //!
   TBranch        *b_trk_SCT_outlier_incidencePhi;   //!
   TBranch        *b_trk_SCT_outlier_incidenceTheta;   //!
   TBranch        *b_trk_SCT_outlier_err_locX;   //!
   TBranch        *b_trk_SCT_outlier_err_locY;   //!
   TBranch        *b_trk_SCT_outlier_cov_locXY;   //!
   TBranch        *b_trk_SCT_outlier_x;   //!
   TBranch        *b_trk_SCT_outlier_y;   //!
   TBranch        *b_trk_SCT_outlier_z;   //!
   TBranch        *b_trk_SCT_outlier_trkLocX;   //!
   TBranch        *b_trk_SCT_outlier_trkLocY;   //!
   TBranch        *b_trk_SCT_outlier_err_trkLocX;   //!
   TBranch        *b_trk_SCT_outlier_err_trkLocY;   //!
   TBranch        *b_trk_SCT_outlier_cov_trkLocXY;   //!
   TBranch        *b_trk_SCT_outlier_chi2;   //!
   TBranch        *b_trk_SCT_outlier_ndof;   //!
   TBranch        *b_trk_TRT_outlier_n;   //!
   TBranch        *b_trk_TRT_outlier_id;   //!
   TBranch        *b_trk_TRT_outlier_detElementId;   //!
   TBranch        *b_trk_TRT_outlier_detType;   //!
   TBranch        *b_trk_TRT_outlier_bec;   //!
   TBranch        *b_trk_TRT_outlier_layer;   //!
   TBranch        *b_trk_TRT_outlier_isCompetingRIO;   //!
   TBranch        *b_trk_TRT_outlier_locR;   //!
   TBranch        *b_trk_TRT_outlier_err_locR;   //!
   TBranch        *b_trk_TRT_outlier_trkLocR;   //!
   TBranch        *b_trk_TRT_outlier_trkLocPhi;   //!
   TBranch        *b_trk_TRT_outlier_err_trkLocR;   //!
   TBranch        *b_trk_TRT_outlier_err_trkLocPhi;   //!
   TBranch        *b_trk_TRT_outlier_cov_trkLocRPhi;   //!
   TBranch        *b_trk_TRT_outlier_TOT;   //!
   TBranch        *b_trk_TRT_outlier_highLevel;   //!
   TBranch        *b_trk_TRT_outlier_trailingEdge;   //!
   TBranch        *b_trk_TRT_outlier_chi2;   //!
   TBranch        *b_trk_TRT_outlier_ndof;   //!
   TBranch        *b_trk_Pixel_hole_n;   //!
   TBranch        *b_trk_Pixel_hole_detElementId;   //!
   TBranch        *b_trk_Pixel_hole_bec;   //!
   TBranch        *b_trk_Pixel_hole_layer;   //!
   TBranch        *b_trk_Pixel_hole_trkLocX;   //!
   TBranch        *b_trk_Pixel_hole_trkLocY;   //!
   TBranch        *b_trk_Pixel_hole_err_trkLocX;   //!
   TBranch        *b_trk_Pixel_hole_err_trkLocY;   //!
   TBranch        *b_trk_Pixel_hole_cov_trkLocXY;   //!
   TBranch        *b_trk_SCT_hole_n;   //!
   TBranch        *b_trk_SCT_hole_detElementId;   //!
   TBranch        *b_trk_SCT_hole_bec;   //!
   TBranch        *b_trk_SCT_hole_layer;   //!
   TBranch        *b_trk_SCT_hole_trkLocX;   //!
   TBranch        *b_trk_SCT_hole_trkLocY;   //!
   TBranch        *b_trk_SCT_hole_err_trkLocX;   //!
   TBranch        *b_trk_SCT_hole_err_trkLocY;   //!
   TBranch        *b_trk_SCT_hole_cov_trkLocXY;   //!
   TBranch        *b_trk_TRT_hole_n;   //!
   TBranch        *b_trk_TRT_hole_detElementId;   //!
   TBranch        *b_trk_TRT_hole_bec;   //!
   TBranch        *b_trk_TRT_hole_layer;   //!
   TBranch        *b_trk_TRT_hole_trkLocR;   //!
   TBranch        *b_trk_TRT_hole_trkLocPhi;   //!
   TBranch        *b_trk_TRT_hole_err_trkLocR;   //!
   TBranch        *b_trk_TRT_hole_err_trkLocPhi;   //!
   TBranch        *b_trk_TRT_hole_cov_trkLocRPhi;   //!
   TBranch        *b_vx_n;   //!
   TBranch        *b_vx_x;   //!
   TBranch        *b_vx_y;   //!
   TBranch        *b_vx_z;   //!
   TBranch        *b_vx_err_x;   //!
   TBranch        *b_vx_err_y;   //!
   TBranch        *b_vx_err_z;   //!
   TBranch        *b_vx_cov_xy;   //!
   TBranch        *b_vx_cov_xz;   //!
   TBranch        *b_vx_cov_yz;   //!
   TBranch        *b_vx_type;   //!
   TBranch        *b_vx_chi2;   //!
   TBranch        *b_vx_ndof;   //!
   TBranch        *b_vx_px;   //!
   TBranch        *b_vx_py;   //!
   TBranch        *b_vx_pz;   //!
   TBranch        *b_vx_E;   //!
   TBranch        *b_vx_m;   //!
   TBranch        *b_vx_nTracks;   //!
   TBranch        *b_vx_sumPt;   //!
   TBranch        *b_vx_trk_weight;   //!
   TBranch        *b_vx_trk_n;   //!
   TBranch        *b_vx_trk_index;   //!
   TBranch        *b_beamSpot_x;   //!
   TBranch        *b_beamSpot_y;   //!
   TBranch        *b_beamSpot_z;   //!
   TBranch        *b_beamSpot_sigma_x;   //!
   TBranch        *b_beamSpot_sigma_y;   //!
   TBranch        *b_beamSpot_sigma_z;   //!
   TBranch        *b_beamSpot_tilt_x;   //!
   TBranch        *b_beamSpot_tilt_y;   //!
   TBranch        *b_unassocHits_nPixel;   //!
   TBranch        *b_unassocHits_nBlayer;   //!
   TBranch        *b_unassocHits_nPixelBarrel;   //!
   TBranch        *b_unassocHits_nPixelEndCapA;   //!
   TBranch        *b_unassocHits_nPixelEndCapC;   //!
   TBranch        *b_unassocHits_nSCT;   //!
   TBranch        *b_unassocHits_nSCTBarrel;   //!
   TBranch        *b_unassocHits_nSCTEndCapA;   //!
   TBranch        *b_unassocHits_nSCTEndCapC;   //!
   TBranch        *b_unassocHits_nTRT;   //!
   TBranch        *b_unassocHits_nTRTBarrel;   //!
   TBranch        *b_unassocHits_nTRTEndCapA;   //!
   TBranch        *b_unassocHits_nTRTEndCapC;   //!
   TBranch        *b_ctpRDO_nBC;   //!
   TBranch        *b_ctpRDO_lvl1aBC;   //!
   TBranch        *b_ctpRDO_time_s;   //!
   TBranch        *b_ctpRDO_time_ns;   //!
   TBranch        *b_ctpRDO_pit;   //!
   TBranch        *b_ctpRDO_tbp;   //!
   TBranch        *b_ctpRDO_tap;   //!
   TBranch        *b_ctpRDO_tav;   //!
   TBranch        *b_ctp_decisionTypeWord;   //!
   TBranch        *b_ctp_decisionItems;   //!
   TBranch        *b_ctp_decisionWords;   //!
   TBranch        *b_ctp_nDecisionItems;   //!
   TBranch        *b_mbts_n;   //!
   TBranch        *b_mbts_energy;   //!
   TBranch        *b_mbts_time;   //!
   TBranch        *b_mbts_quality;   //!
   TBranch        *b_mbts_type;   //!
   TBranch        *b_mbts_module;   //!
   TBranch        *b_mbts_channel;   //!
   TBranch        *b_trig_L1_TAV;   //!
   TBranch        *b_trig_L2_passedPhysics;   //!
   TBranch        *b_trig_EF_passedPhysics;   //!
   TBranch        *b_trig_L1_TBP;   //!
   TBranch        *b_trig_L1_TAP;   //!
   TBranch        *b_trig_L2_passedRaw;   //!
   TBranch        *b_trig_EF_passedRaw;   //!
   TBranch        *b_trig_L2_truncated;   //!
   TBranch        *b_trig_EF_truncated;   //!
   TBranch        *b_trig_L2_resurrected;   //!
   TBranch        *b_trig_EF_resurrected;   //!
   TBranch        *b_trig_L2_passedThrough;   //!
   TBranch        *b_trig_EF_passedThrough;   //!
   TBranch        *b_trig_L2_wasPrescaled;   //!
   TBranch        *b_trig_L2_wasResurrected;   //!
   TBranch        *b_trig_EF_wasPrescaled;   //!
   TBranch        *b_trig_EF_wasResurrected;   //!
   TBranch        *b_trig_DB_SMK;   //!
   TBranch        *b_trig_DB_L1PSK;   //!
   TBranch        *b_trig_DB_HLTPSK;   //!
   TBranch        *b_bcmRDO_n;   //!
   TBranch        *b_bcmRDO_channel;   //!
   TBranch        *b_bcmRDO_nhits;   //!
   TBranch        *b_bcmRDO_pulse1pos;   //!
   TBranch        *b_bcmRDO_pulse1width;   //!
   TBranch        *b_bcmRDO_pulse2pos;   //!
   TBranch        *b_bcmRDO_pulse2width;   //!
   TBranch        *b_bcmRDO_lvl1a;   //!
   TBranch        *b_bcmRDO_bcid;   //!
   TBranch        *b_bcmRDO_lvl1id;   //!
   TBranch        *b_mbtsLvl2_nElements;   //!
   TBranch        *b_mbtsLvl2_energies;   //!
   TBranch        *b_mbtsLvl2_ntimes;   //!
   TBranch        *b_mbtsLvl2_times;   //!
   TBranch        *b_lvl2_sp_nElements;   //!
   TBranch        *b_lvl2_sp_hPixelClusTotBins;   //!
   TBranch        *b_lvl2_sp_hPixelClusTotMin;   //!
   TBranch        *b_lvl2_sp_hPixelClusTotMax;   //!
   TBranch        *b_lvl2_sp_hPixelClusSizeBins;   //!
   TBranch        *b_lvl2_sp_hPixelClusSizeMin;   //!
   TBranch        *b_lvl2_sp_hPixelClusSizeMax;   //!
   TBranch        *b_lvl2_sp_pixelClusEndcapC_contents;   //!
   TBranch        *b_lvl2_sp_pixelClusBarrel_contents;   //!
   TBranch        *b_lvl2_sp_pixelClusEndcapA_contents;   //!
   TBranch        *b_lvl2_sp_droppedPixelModuleIds;   //!
   TBranch        *b_lvl2_sp_sctSpEndcapC;   //!
   TBranch        *b_lvl2_sp_sctSpBarrel;   //!
   TBranch        *b_lvl2_sp_sctSpEndcapA;   //!
   TBranch        *b_lvl2_sp_droppedSctModuleIds;   //!
   TBranch        *b_lvl2_mbTrt_nElements;   //!
   TBranch        *b_lvl2_mbTrt_hTotBins;   //!
   TBranch        *b_lvl2_mbTrt_hTotMin;   //!
   TBranch        *b_lvl2_mbTrt_hTotMax;   //!
   TBranch        *b_lvl2_mbTrt_endcapC_contents;   //!
   TBranch        *b_lvl2_mbTrt_barrel_contents;   //!
   TBranch        *b_lvl2_mbTrt_endcapA_contents;   //!
   TBranch        *b_ef_trk_nElements;   //!
   TBranch        *b_ef_trk_hZ0Bins;   //!
   TBranch        *b_ef_trk_hZ0Min;   //!
   TBranch        *b_ef_trk_hZ0Max;   //!
   TBranch        *b_ef_trk_hPtBins;   //!
   TBranch        *b_ef_trk_hPtMin;   //!
   TBranch        *b_ef_trk_hPtMax;   //!
   TBranch        *b_ef_trk_hEtaBins;   //!
   TBranch        *b_ef_trk_hEtaMin;   //!
   TBranch        *b_ef_trk_hEtaMax;   //!
   TBranch        *b_ef_trk_hPhiBins;   //!
   TBranch        *b_ef_trk_hPhiMin;   //!
   TBranch        *b_ef_trk_hPhiMax;   //!
   TBranch        *b_ef_trk_z0_pt_contents;   //!
   TBranch        *b_ef_trk_eta_phi_contents;   //!
   TBranch        *b_trkPix_n;   //!
   TBranch        *b_trkPix_d0;   //!
   TBranch        *b_trkPix_z0;   //!
   TBranch        *b_trkPix_phi;   //!
   TBranch        *b_trkPix_theta;   //!
   TBranch        *b_trkPix_qoverp;   //!
   TBranch        *b_trkPix_pt;   //!
   TBranch        *b_trkPix_eta;   //!
   TBranch        *b_trkPix_err_d0;   //!
   TBranch        *b_trkPix_err_z0;   //!
   TBranch        *b_trkPix_err_phi;   //!
   TBranch        *b_trkPix_err_theta;   //!
   TBranch        *b_trkPix_err_qoverp;   //!
   TBranch        *b_trkPix_cov_d0_z0;   //!
   TBranch        *b_trkPix_cov_d0_phi;   //!
   TBranch        *b_trkPix_cov_d0_theta;   //!
   TBranch        *b_trkPix_cov_d0_qoverp;   //!
   TBranch        *b_trkPix_cov_z0_phi;   //!
   TBranch        *b_trkPix_cov_z0_theta;   //!
   TBranch        *b_trkPix_cov_z0_qoverp;   //!
   TBranch        *b_trkPix_cov_phi_theta;   //!
   TBranch        *b_trkPix_cov_phi_qoverp;   //!
   TBranch        *b_trkPix_cov_theta_qoverp;   //!
   TBranch        *b_trkPix_d0_wrtPV;   //!
   TBranch        *b_trkPix_z0_wrtPV;   //!
   TBranch        *b_trkPix_phi_wrtPV;   //!
   TBranch        *b_trkPix_err_d0_wrtPV;   //!
   TBranch        *b_trkPix_err_z0_wrtPV;   //!
   TBranch        *b_trkPix_err_phi_wrtPV;   //!
   TBranch        *b_trkPix_err_theta_wrtPV;   //!
   TBranch        *b_trkPix_err_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trkPix_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trkPix_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trkPix_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trkPix_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trkPix_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trkPix_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trkPix_d0_wrtBS;   //!
   TBranch        *b_trkPix_z0_wrtBS;   //!
   TBranch        *b_trkPix_phi_wrtBS;   //!
   TBranch        *b_trkPix_err_d0_wrtBS;   //!
   TBranch        *b_trkPix_err_z0_wrtBS;   //!
   TBranch        *b_trkPix_err_phi_wrtBS;   //!
   TBranch        *b_trkPix_err_theta_wrtBS;   //!
   TBranch        *b_trkPix_err_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_cov_d0_z0_wrtBS;   //!
   TBranch        *b_trkPix_cov_d0_phi_wrtBS;   //!
   TBranch        *b_trkPix_cov_d0_theta_wrtBS;   //!
   TBranch        *b_trkPix_cov_d0_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_cov_z0_phi_wrtBS;   //!
   TBranch        *b_trkPix_cov_z0_theta_wrtBS;   //!
   TBranch        *b_trkPix_cov_z0_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_cov_phi_theta_wrtBS;   //!
   TBranch        *b_trkPix_cov_phi_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_cov_theta_qoverp_wrtBS;   //!
   TBranch        *b_trkPix_d0_wrtBL;   //!
   TBranch        *b_trkPix_z0_wrtBL;   //!
   TBranch        *b_trkPix_phi_wrtBL;   //!
   TBranch        *b_trkPix_d0_err_wrtBL;   //!
   TBranch        *b_trkPix_z0_err_wrtBL;   //!
   TBranch        *b_trkPix_phi_err_wrtBL;   //!
   TBranch        *b_trkPix_theta_err_wrtBL;   //!
   TBranch        *b_trkPix_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_d0_z0_err_wrtBL;   //!
   TBranch        *b_trkPix_d0_phi_err_wrtBL;   //!
   TBranch        *b_trkPix_d0_theta_err_wrtBL;   //!
   TBranch        *b_trkPix_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_z0_phi_err_wrtBL;   //!
   TBranch        *b_trkPix_z0_theta_err_wrtBL;   //!
   TBranch        *b_trkPix_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_phi_theta_err_wrtBL;   //!
   TBranch        *b_trkPix_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trkPix_chi2;   //!
   TBranch        *b_trkPix_ndof;   //!
   TBranch        *b_trkPix_nBLHits;   //!
   TBranch        *b_trkPix_nPixHits;   //!
   TBranch        *b_trkPix_nSCTHits;   //!
   TBranch        *b_trkPix_nTRTHits;   //!
   TBranch        *b_trkPix_nTRTHighTHits;   //!
   TBranch        *b_trkPix_nTRTXenonHits;   //!
   TBranch        *b_trkPix_nPixHoles;   //!
   TBranch        *b_trkPix_nSCTHoles;   //!
   TBranch        *b_trkPix_nTRTHoles;   //!
   TBranch        *b_trkPix_nPixelDeadSensors;   //!
   TBranch        *b_trkPix_nSCTDeadSensors;   //!
   TBranch        *b_trkPix_nBLSharedHits;   //!
   TBranch        *b_trkPix_nPixSharedHits;   //!
   TBranch        *b_trkPix_nSCTSharedHits;   //!
   TBranch        *b_trkPix_nBLayerSplitHits;   //!
   TBranch        *b_trkPix_nPixSplitHits;   //!
   TBranch        *b_trkPix_nBLayerOutliers;   //!
   TBranch        *b_trkPix_nPixelOutliers;   //!
   TBranch        *b_trkPix_nSCTOutliers;   //!
   TBranch        *b_trkPix_nTRTOutliers;   //!
   TBranch        *b_trkPix_nTRTHighTOutliers;   //!
   TBranch        *b_trkPix_expectBLayerHit;   //!
   TBranch        *b_trkPix_nHits;   //!
   TBranch        *b_trkPix_nHoles;   //!
   TBranch        *b_trkPix_hitPattern;   //!
   TBranch        *b_trkPix_pixeldEdx;   //!
   TBranch        *b_trkPix_nGoodHitsPixeldEdx;   //!
   TBranch        *b_trkPix_massPixeldEdx;   //!
   TBranch        *b_trkPix_likelihoodsPixeldEdx;   //!
   TBranch        *b_trkPix_fitter;   //!
   TBranch        *b_trkPix_patternReco1;   //!
   TBranch        *b_trkPix_patternReco2;   //!
   TBranch        *b_trkPix_trackProperties;   //!
   TBranch        *b_trkPix_particleHypothesis;   //!
   TBranch        *b_trkPix_blayerPrediction_x;   //!
   TBranch        *b_trkPix_blayerPrediction_y;   //!
   TBranch        *b_trkPix_blayerPrediction_z;   //!
   TBranch        *b_trkPix_blayerPrediction_locX;   //!
   TBranch        *b_trkPix_blayerPrediction_locY;   //!
   TBranch        *b_trkPix_blayerPrediction_err_locX;   //!
   TBranch        *b_trkPix_blayerPrediction_err_locY;   //!
   TBranch        *b_trkPix_blayerPrediction_etaDistToEdge;   //!
   TBranch        *b_trkPix_blayerPrediction_phiDistToEdge;   //!
   TBranch        *b_trkPix_blayerPrediction_detElementId;   //!
   TBranch        *b_trkPix_blayerPrediction_row;   //!
   TBranch        *b_trkPix_blayerPrediction_col;   //!
   TBranch        *b_trkPix_blayerPrediction_type;   //!
   TBranch        *b_trkPix_Pixel_hit_n;   //!
   TBranch        *b_trkPix_Pixel_hit_id;   //!
   TBranch        *b_trkPix_Pixel_hit_detElementId;   //!
   TBranch        *b_trkPix_Pixel_hit_detType;   //!
   TBranch        *b_trkPix_Pixel_hit_bec;   //!
   TBranch        *b_trkPix_Pixel_hit_layer;   //!
   TBranch        *b_trkPix_Pixel_hit_charge;   //!
   TBranch        *b_trkPix_Pixel_hit_sizePhi;   //!
   TBranch        *b_trkPix_Pixel_hit_sizeZ;   //!
   TBranch        *b_trkPix_Pixel_hit_size;   //!
   TBranch        *b_trkPix_Pixel_hit_isFake;   //!
   TBranch        *b_trkPix_Pixel_hit_isGanged;   //!
   TBranch        *b_trkPix_Pixel_hit_isSplit;   //!
   TBranch        *b_trkPix_Pixel_hit_splitProb1;   //!
   TBranch        *b_trkPix_Pixel_hit_splitProb2;   //!
   TBranch        *b_trkPix_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trkPix_Pixel_hit_locX;   //!
   TBranch        *b_trkPix_Pixel_hit_locY;   //!
   TBranch        *b_trkPix_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trkPix_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trkPix_Pixel_hit_err_locX;   //!
   TBranch        *b_trkPix_Pixel_hit_err_locY;   //!
   TBranch        *b_trkPix_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trkPix_Pixel_hit_x;   //!
   TBranch        *b_trkPix_Pixel_hit_y;   //!
   TBranch        *b_trkPix_Pixel_hit_z;   //!
   TBranch        *b_trkPix_Pixel_hit_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_hit_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trkPix_Pixel_hit_chi2;   //!
   TBranch        *b_trkPix_Pixel_hit_ndof;   //!
   TBranch        *b_trkPix_SCT_hit_n;   //!
   TBranch        *b_trkPix_SCT_hit_id;   //!
   TBranch        *b_trkPix_SCT_hit_detElementId;   //!
   TBranch        *b_trkPix_SCT_hit_detType;   //!
   TBranch        *b_trkPix_SCT_hit_bec;   //!
   TBranch        *b_trkPix_SCT_hit_layer;   //!
   TBranch        *b_trkPix_SCT_hit_sizePhi;   //!
   TBranch        *b_trkPix_SCT_hit_isCompetingRIO;   //!
   TBranch        *b_trkPix_SCT_hit_locX;   //!
   TBranch        *b_trkPix_SCT_hit_locY;   //!
   TBranch        *b_trkPix_SCT_hit_incidencePhi;   //!
   TBranch        *b_trkPix_SCT_hit_incidenceTheta;   //!
   TBranch        *b_trkPix_SCT_hit_err_locX;   //!
   TBranch        *b_trkPix_SCT_hit_err_locY;   //!
   TBranch        *b_trkPix_SCT_hit_cov_locXY;   //!
   TBranch        *b_trkPix_SCT_hit_x;   //!
   TBranch        *b_trkPix_SCT_hit_y;   //!
   TBranch        *b_trkPix_SCT_hit_z;   //!
   TBranch        *b_trkPix_SCT_hit_trkLocX;   //!
   TBranch        *b_trkPix_SCT_hit_trkLocY;   //!
   TBranch        *b_trkPix_SCT_hit_err_trkLocX;   //!
   TBranch        *b_trkPix_SCT_hit_err_trkLocY;   //!
   TBranch        *b_trkPix_SCT_hit_cov_trkLocXY;   //!
   TBranch        *b_trkPix_SCT_hit_chi2;   //!
   TBranch        *b_trkPix_SCT_hit_ndof;   //!
   TBranch        *b_trkPix_TRT_hit_n;   //!
   TBranch        *b_trkPix_TRT_hit_id;   //!
   TBranch        *b_trkPix_TRT_hit_detElementId;   //!
   TBranch        *b_trkPix_TRT_hit_detType;   //!
   TBranch        *b_trkPix_TRT_hit_bec;   //!
   TBranch        *b_trkPix_TRT_hit_layer;   //!
   TBranch        *b_trkPix_TRT_hit_isCompetingRIO;   //!
   TBranch        *b_trkPix_TRT_hit_locR;   //!
   TBranch        *b_trkPix_TRT_hit_err_locR;   //!
   TBranch        *b_trkPix_TRT_hit_trkLocR;   //!
   TBranch        *b_trkPix_TRT_hit_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_hit_err_trkLocR;   //!
   TBranch        *b_trkPix_TRT_hit_err_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_hit_cov_trkLocRPhi;   //!
   TBranch        *b_trkPix_TRT_hit_TOT;   //!
   TBranch        *b_trkPix_TRT_hit_highLevel;   //!
   TBranch        *b_trkPix_TRT_hit_trailingEdge;   //!
   TBranch        *b_trkPix_TRT_hit_chi2;   //!
   TBranch        *b_trkPix_TRT_hit_ndof;   //!
   TBranch        *b_trkPix_Pixel_outlier_n;   //!
   TBranch        *b_trkPix_Pixel_outlier_id;   //!
   TBranch        *b_trkPix_Pixel_outlier_detElementId;   //!
   TBranch        *b_trkPix_Pixel_outlier_detType;   //!
   TBranch        *b_trkPix_Pixel_outlier_bec;   //!
   TBranch        *b_trkPix_Pixel_outlier_layer;   //!
   TBranch        *b_trkPix_Pixel_outlier_charge;   //!
   TBranch        *b_trkPix_Pixel_outlier_sizePhi;   //!
   TBranch        *b_trkPix_Pixel_outlier_sizeZ;   //!
   TBranch        *b_trkPix_Pixel_outlier_size;   //!
   TBranch        *b_trkPix_Pixel_outlier_isFake;   //!
   TBranch        *b_trkPix_Pixel_outlier_isGanged;   //!
   TBranch        *b_trkPix_Pixel_outlier_isSplit;   //!
   TBranch        *b_trkPix_Pixel_outlier_splitProb1;   //!
   TBranch        *b_trkPix_Pixel_outlier_splitProb2;   //!
   TBranch        *b_trkPix_Pixel_outlier_isCompetingRIO;   //!
   TBranch        *b_trkPix_Pixel_outlier_locX;   //!
   TBranch        *b_trkPix_Pixel_outlier_locY;   //!
   TBranch        *b_trkPix_Pixel_outlier_incidencePhi;   //!
   TBranch        *b_trkPix_Pixel_outlier_incidenceTheta;   //!
   TBranch        *b_trkPix_Pixel_outlier_err_locX;   //!
   TBranch        *b_trkPix_Pixel_outlier_err_locY;   //!
   TBranch        *b_trkPix_Pixel_outlier_cov_locXY;   //!
   TBranch        *b_trkPix_Pixel_outlier_x;   //!
   TBranch        *b_trkPix_Pixel_outlier_y;   //!
   TBranch        *b_trkPix_Pixel_outlier_z;   //!
   TBranch        *b_trkPix_Pixel_outlier_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_outlier_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_outlier_err_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_outlier_err_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkPix_Pixel_outlier_chi2;   //!
   TBranch        *b_trkPix_Pixel_outlier_ndof;   //!
   TBranch        *b_trkPix_SCT_outlier_n;   //!
   TBranch        *b_trkPix_SCT_outlier_id;   //!
   TBranch        *b_trkPix_SCT_outlier_detElementId;   //!
   TBranch        *b_trkPix_SCT_outlier_detType;   //!
   TBranch        *b_trkPix_SCT_outlier_bec;   //!
   TBranch        *b_trkPix_SCT_outlier_layer;   //!
   TBranch        *b_trkPix_SCT_outlier_sizePhi;   //!
   TBranch        *b_trkPix_SCT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkPix_SCT_outlier_locX;   //!
   TBranch        *b_trkPix_SCT_outlier_locY;   //!
   TBranch        *b_trkPix_SCT_outlier_incidencePhi;   //!
   TBranch        *b_trkPix_SCT_outlier_incidenceTheta;   //!
   TBranch        *b_trkPix_SCT_outlier_err_locX;   //!
   TBranch        *b_trkPix_SCT_outlier_err_locY;   //!
   TBranch        *b_trkPix_SCT_outlier_cov_locXY;   //!
   TBranch        *b_trkPix_SCT_outlier_x;   //!
   TBranch        *b_trkPix_SCT_outlier_y;   //!
   TBranch        *b_trkPix_SCT_outlier_z;   //!
   TBranch        *b_trkPix_SCT_outlier_trkLocX;   //!
   TBranch        *b_trkPix_SCT_outlier_trkLocY;   //!
   TBranch        *b_trkPix_SCT_outlier_err_trkLocX;   //!
   TBranch        *b_trkPix_SCT_outlier_err_trkLocY;   //!
   TBranch        *b_trkPix_SCT_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkPix_SCT_outlier_chi2;   //!
   TBranch        *b_trkPix_SCT_outlier_ndof;   //!
   TBranch        *b_trkPix_TRT_outlier_n;   //!
   TBranch        *b_trkPix_TRT_outlier_id;   //!
   TBranch        *b_trkPix_TRT_outlier_detElementId;   //!
   TBranch        *b_trkPix_TRT_outlier_detType;   //!
   TBranch        *b_trkPix_TRT_outlier_bec;   //!
   TBranch        *b_trkPix_TRT_outlier_layer;   //!
   TBranch        *b_trkPix_TRT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkPix_TRT_outlier_locR;   //!
   TBranch        *b_trkPix_TRT_outlier_err_locR;   //!
   TBranch        *b_trkPix_TRT_outlier_trkLocR;   //!
   TBranch        *b_trkPix_TRT_outlier_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_outlier_err_trkLocR;   //!
   TBranch        *b_trkPix_TRT_outlier_err_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_outlier_cov_trkLocRPhi;   //!
   TBranch        *b_trkPix_TRT_outlier_TOT;   //!
   TBranch        *b_trkPix_TRT_outlier_highLevel;   //!
   TBranch        *b_trkPix_TRT_outlier_trailingEdge;   //!
   TBranch        *b_trkPix_TRT_outlier_chi2;   //!
   TBranch        *b_trkPix_TRT_outlier_ndof;   //!
   TBranch        *b_trkPix_Pixel_hole_n;   //!
   TBranch        *b_trkPix_Pixel_hole_detElementId;   //!
   TBranch        *b_trkPix_Pixel_hole_bec;   //!
   TBranch        *b_trkPix_Pixel_hole_layer;   //!
   TBranch        *b_trkPix_Pixel_hole_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_hole_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_hole_err_trkLocX;   //!
   TBranch        *b_trkPix_Pixel_hole_err_trkLocY;   //!
   TBranch        *b_trkPix_Pixel_hole_cov_trkLocXY;   //!
   TBranch        *b_trkPix_SCT_hole_n;   //!
   TBranch        *b_trkPix_SCT_hole_detElementId;   //!
   TBranch        *b_trkPix_SCT_hole_bec;   //!
   TBranch        *b_trkPix_SCT_hole_layer;   //!
   TBranch        *b_trkPix_SCT_hole_trkLocX;   //!
   TBranch        *b_trkPix_SCT_hole_trkLocY;   //!
   TBranch        *b_trkPix_SCT_hole_err_trkLocX;   //!
   TBranch        *b_trkPix_SCT_hole_err_trkLocY;   //!
   TBranch        *b_trkPix_SCT_hole_cov_trkLocXY;   //!
   TBranch        *b_trkPix_TRT_hole_n;   //!
   TBranch        *b_trkPix_TRT_hole_detElementId;   //!
   TBranch        *b_trkPix_TRT_hole_bec;   //!
   TBranch        *b_trkPix_TRT_hole_layer;   //!
   TBranch        *b_trkPix_TRT_hole_trkLocR;   //!
   TBranch        *b_trkPix_TRT_hole_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_hole_err_trkLocR;   //!
   TBranch        *b_trkPix_TRT_hole_err_trkLocPhi;   //!
   TBranch        *b_trkPix_TRT_hole_cov_trkLocRPhi;   //!
   TBranch        *b_trkSCT_n;   //!
   TBranch        *b_trkSCT_d0;   //!
   TBranch        *b_trkSCT_z0;   //!
   TBranch        *b_trkSCT_phi;   //!
   TBranch        *b_trkSCT_theta;   //!
   TBranch        *b_trkSCT_qoverp;   //!
   TBranch        *b_trkSCT_pt;   //!
   TBranch        *b_trkSCT_eta;   //!
   TBranch        *b_trkSCT_err_d0;   //!
   TBranch        *b_trkSCT_err_z0;   //!
   TBranch        *b_trkSCT_err_phi;   //!
   TBranch        *b_trkSCT_err_theta;   //!
   TBranch        *b_trkSCT_err_qoverp;   //!
   TBranch        *b_trkSCT_cov_d0_z0;   //!
   TBranch        *b_trkSCT_cov_d0_phi;   //!
   TBranch        *b_trkSCT_cov_d0_theta;   //!
   TBranch        *b_trkSCT_cov_d0_qoverp;   //!
   TBranch        *b_trkSCT_cov_z0_phi;   //!
   TBranch        *b_trkSCT_cov_z0_theta;   //!
   TBranch        *b_trkSCT_cov_z0_qoverp;   //!
   TBranch        *b_trkSCT_cov_phi_theta;   //!
   TBranch        *b_trkSCT_cov_phi_qoverp;   //!
   TBranch        *b_trkSCT_cov_theta_qoverp;   //!
   TBranch        *b_trkSCT_d0_wrtPV;   //!
   TBranch        *b_trkSCT_z0_wrtPV;   //!
   TBranch        *b_trkSCT_phi_wrtPV;   //!
   TBranch        *b_trkSCT_err_d0_wrtPV;   //!
   TBranch        *b_trkSCT_err_z0_wrtPV;   //!
   TBranch        *b_trkSCT_err_phi_wrtPV;   //!
   TBranch        *b_trkSCT_err_theta_wrtPV;   //!
   TBranch        *b_trkSCT_err_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trkSCT_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trkSCT_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trkSCT_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trkSCT_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trkSCT_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trkSCT_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trkSCT_d0_wrtBS;   //!
   TBranch        *b_trkSCT_z0_wrtBS;   //!
   TBranch        *b_trkSCT_phi_wrtBS;   //!
   TBranch        *b_trkSCT_err_d0_wrtBS;   //!
   TBranch        *b_trkSCT_err_z0_wrtBS;   //!
   TBranch        *b_trkSCT_err_phi_wrtBS;   //!
   TBranch        *b_trkSCT_err_theta_wrtBS;   //!
   TBranch        *b_trkSCT_err_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_cov_d0_z0_wrtBS;   //!
   TBranch        *b_trkSCT_cov_d0_phi_wrtBS;   //!
   TBranch        *b_trkSCT_cov_d0_theta_wrtBS;   //!
   TBranch        *b_trkSCT_cov_d0_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_cov_z0_phi_wrtBS;   //!
   TBranch        *b_trkSCT_cov_z0_theta_wrtBS;   //!
   TBranch        *b_trkSCT_cov_z0_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_cov_phi_theta_wrtBS;   //!
   TBranch        *b_trkSCT_cov_phi_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_cov_theta_qoverp_wrtBS;   //!
   TBranch        *b_trkSCT_d0_wrtBL;   //!
   TBranch        *b_trkSCT_z0_wrtBL;   //!
   TBranch        *b_trkSCT_phi_wrtBL;   //!
   TBranch        *b_trkSCT_d0_err_wrtBL;   //!
   TBranch        *b_trkSCT_z0_err_wrtBL;   //!
   TBranch        *b_trkSCT_phi_err_wrtBL;   //!
   TBranch        *b_trkSCT_theta_err_wrtBL;   //!
   TBranch        *b_trkSCT_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_d0_z0_err_wrtBL;   //!
   TBranch        *b_trkSCT_d0_phi_err_wrtBL;   //!
   TBranch        *b_trkSCT_d0_theta_err_wrtBL;   //!
   TBranch        *b_trkSCT_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_z0_phi_err_wrtBL;   //!
   TBranch        *b_trkSCT_z0_theta_err_wrtBL;   //!
   TBranch        *b_trkSCT_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_phi_theta_err_wrtBL;   //!
   TBranch        *b_trkSCT_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trkSCT_chi2;   //!
   TBranch        *b_trkSCT_ndof;   //!
   TBranch        *b_trkSCT_nBLHits;   //!
   TBranch        *b_trkSCT_nPixHits;   //!
   TBranch        *b_trkSCT_nSCTHits;   //!
   TBranch        *b_trkSCT_nTRTHits;   //!
   TBranch        *b_trkSCT_nTRTHighTHits;   //!
   TBranch        *b_trkSCT_nTRTXenonHits;   //!
   TBranch        *b_trkSCT_nPixHoles;   //!
   TBranch        *b_trkSCT_nSCTHoles;   //!
   TBranch        *b_trkSCT_nTRTHoles;   //!
   TBranch        *b_trkSCT_nPixelDeadSensors;   //!
   TBranch        *b_trkSCT_nSCTDeadSensors;   //!
   TBranch        *b_trkSCT_nBLSharedHits;   //!
   TBranch        *b_trkSCT_nPixSharedHits;   //!
   TBranch        *b_trkSCT_nSCTSharedHits;   //!
   TBranch        *b_trkSCT_nBLayerSplitHits;   //!
   TBranch        *b_trkSCT_nPixSplitHits;   //!
   TBranch        *b_trkSCT_nBLayerOutliers;   //!
   TBranch        *b_trkSCT_nPixelOutliers;   //!
   TBranch        *b_trkSCT_nSCTOutliers;   //!
   TBranch        *b_trkSCT_nTRTOutliers;   //!
   TBranch        *b_trkSCT_nTRTHighTOutliers;   //!
   TBranch        *b_trkSCT_expectBLayerHit;   //!
   TBranch        *b_trkSCT_nHits;   //!
   TBranch        *b_trkSCT_nHoles;   //!
   TBranch        *b_trkSCT_hitPattern;   //!
   TBranch        *b_trkSCT_pixeldEdx;   //!
   TBranch        *b_trkSCT_nGoodHitsPixeldEdx;   //!
   TBranch        *b_trkSCT_massPixeldEdx;   //!
   TBranch        *b_trkSCT_likelihoodsPixeldEdx;   //!
   TBranch        *b_trkSCT_fitter;   //!
   TBranch        *b_trkSCT_patternReco1;   //!
   TBranch        *b_trkSCT_patternReco2;   //!
   TBranch        *b_trkSCT_trackProperties;   //!
   TBranch        *b_trkSCT_particleHypothesis;   //!
   TBranch        *b_trkSCT_blayerPrediction_x;   //!
   TBranch        *b_trkSCT_blayerPrediction_y;   //!
   TBranch        *b_trkSCT_blayerPrediction_z;   //!
   TBranch        *b_trkSCT_blayerPrediction_locX;   //!
   TBranch        *b_trkSCT_blayerPrediction_locY;   //!
   TBranch        *b_trkSCT_blayerPrediction_err_locX;   //!
   TBranch        *b_trkSCT_blayerPrediction_err_locY;   //!
   TBranch        *b_trkSCT_blayerPrediction_etaDistToEdge;   //!
   TBranch        *b_trkSCT_blayerPrediction_phiDistToEdge;   //!
   TBranch        *b_trkSCT_blayerPrediction_detElementId;   //!
   TBranch        *b_trkSCT_blayerPrediction_row;   //!
   TBranch        *b_trkSCT_blayerPrediction_col;   //!
   TBranch        *b_trkSCT_blayerPrediction_type;   //!
   TBranch        *b_trkSCT_Pixel_hit_n;   //!
   TBranch        *b_trkSCT_Pixel_hit_id;   //!
   TBranch        *b_trkSCT_Pixel_hit_detElementId;   //!
   TBranch        *b_trkSCT_Pixel_hit_detType;   //!
   TBranch        *b_trkSCT_Pixel_hit_bec;   //!
   TBranch        *b_trkSCT_Pixel_hit_layer;   //!
   TBranch        *b_trkSCT_Pixel_hit_charge;   //!
   TBranch        *b_trkSCT_Pixel_hit_sizePhi;   //!
   TBranch        *b_trkSCT_Pixel_hit_sizeZ;   //!
   TBranch        *b_trkSCT_Pixel_hit_size;   //!
   TBranch        *b_trkSCT_Pixel_hit_isFake;   //!
   TBranch        *b_trkSCT_Pixel_hit_isGanged;   //!
   TBranch        *b_trkSCT_Pixel_hit_isSplit;   //!
   TBranch        *b_trkSCT_Pixel_hit_splitProb1;   //!
   TBranch        *b_trkSCT_Pixel_hit_splitProb2;   //!
   TBranch        *b_trkSCT_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trkSCT_Pixel_hit_locX;   //!
   TBranch        *b_trkSCT_Pixel_hit_locY;   //!
   TBranch        *b_trkSCT_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trkSCT_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trkSCT_Pixel_hit_err_locX;   //!
   TBranch        *b_trkSCT_Pixel_hit_err_locY;   //!
   TBranch        *b_trkSCT_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trkSCT_Pixel_hit_x;   //!
   TBranch        *b_trkSCT_Pixel_hit_y;   //!
   TBranch        *b_trkSCT_Pixel_hit_z;   //!
   TBranch        *b_trkSCT_Pixel_hit_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_hit_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_Pixel_hit_chi2;   //!
   TBranch        *b_trkSCT_Pixel_hit_ndof;   //!
   TBranch        *b_trkSCT_SCT_hit_n;   //!
   TBranch        *b_trkSCT_SCT_hit_id;   //!
   TBranch        *b_trkSCT_SCT_hit_detElementId;   //!
   TBranch        *b_trkSCT_SCT_hit_detType;   //!
   TBranch        *b_trkSCT_SCT_hit_bec;   //!
   TBranch        *b_trkSCT_SCT_hit_layer;   //!
   TBranch        *b_trkSCT_SCT_hit_sizePhi;   //!
   TBranch        *b_trkSCT_SCT_hit_isCompetingRIO;   //!
   TBranch        *b_trkSCT_SCT_hit_locX;   //!
   TBranch        *b_trkSCT_SCT_hit_locY;   //!
   TBranch        *b_trkSCT_SCT_hit_incidencePhi;   //!
   TBranch        *b_trkSCT_SCT_hit_incidenceTheta;   //!
   TBranch        *b_trkSCT_SCT_hit_err_locX;   //!
   TBranch        *b_trkSCT_SCT_hit_err_locY;   //!
   TBranch        *b_trkSCT_SCT_hit_cov_locXY;   //!
   TBranch        *b_trkSCT_SCT_hit_x;   //!
   TBranch        *b_trkSCT_SCT_hit_y;   //!
   TBranch        *b_trkSCT_SCT_hit_z;   //!
   TBranch        *b_trkSCT_SCT_hit_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_hit_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_hit_err_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_hit_err_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_hit_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_SCT_hit_chi2;   //!
   TBranch        *b_trkSCT_SCT_hit_ndof;   //!
   TBranch        *b_trkSCT_TRT_hit_n;   //!
   TBranch        *b_trkSCT_TRT_hit_id;   //!
   TBranch        *b_trkSCT_TRT_hit_detElementId;   //!
   TBranch        *b_trkSCT_TRT_hit_detType;   //!
   TBranch        *b_trkSCT_TRT_hit_bec;   //!
   TBranch        *b_trkSCT_TRT_hit_layer;   //!
   TBranch        *b_trkSCT_TRT_hit_isCompetingRIO;   //!
   TBranch        *b_trkSCT_TRT_hit_locR;   //!
   TBranch        *b_trkSCT_TRT_hit_err_locR;   //!
   TBranch        *b_trkSCT_TRT_hit_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_hit_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_hit_err_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_hit_err_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_hit_cov_trkLocRPhi;   //!
   TBranch        *b_trkSCT_TRT_hit_TOT;   //!
   TBranch        *b_trkSCT_TRT_hit_highLevel;   //!
   TBranch        *b_trkSCT_TRT_hit_trailingEdge;   //!
   TBranch        *b_trkSCT_TRT_hit_chi2;   //!
   TBranch        *b_trkSCT_TRT_hit_ndof;   //!
   TBranch        *b_trkSCT_Pixel_outlier_n;   //!
   TBranch        *b_trkSCT_Pixel_outlier_id;   //!
   TBranch        *b_trkSCT_Pixel_outlier_detElementId;   //!
   TBranch        *b_trkSCT_Pixel_outlier_detType;   //!
   TBranch        *b_trkSCT_Pixel_outlier_bec;   //!
   TBranch        *b_trkSCT_Pixel_outlier_layer;   //!
   TBranch        *b_trkSCT_Pixel_outlier_charge;   //!
   TBranch        *b_trkSCT_Pixel_outlier_sizePhi;   //!
   TBranch        *b_trkSCT_Pixel_outlier_sizeZ;   //!
   TBranch        *b_trkSCT_Pixel_outlier_size;   //!
   TBranch        *b_trkSCT_Pixel_outlier_isFake;   //!
   TBranch        *b_trkSCT_Pixel_outlier_isGanged;   //!
   TBranch        *b_trkSCT_Pixel_outlier_isSplit;   //!
   TBranch        *b_trkSCT_Pixel_outlier_splitProb1;   //!
   TBranch        *b_trkSCT_Pixel_outlier_splitProb2;   //!
   TBranch        *b_trkSCT_Pixel_outlier_isCompetingRIO;   //!
   TBranch        *b_trkSCT_Pixel_outlier_locX;   //!
   TBranch        *b_trkSCT_Pixel_outlier_locY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_incidencePhi;   //!
   TBranch        *b_trkSCT_Pixel_outlier_incidenceTheta;   //!
   TBranch        *b_trkSCT_Pixel_outlier_err_locX;   //!
   TBranch        *b_trkSCT_Pixel_outlier_err_locY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_cov_locXY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_x;   //!
   TBranch        *b_trkSCT_Pixel_outlier_y;   //!
   TBranch        *b_trkSCT_Pixel_outlier_z;   //!
   TBranch        *b_trkSCT_Pixel_outlier_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_outlier_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_err_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_outlier_err_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_Pixel_outlier_chi2;   //!
   TBranch        *b_trkSCT_Pixel_outlier_ndof;   //!
   TBranch        *b_trkSCT_SCT_outlier_n;   //!
   TBranch        *b_trkSCT_SCT_outlier_id;   //!
   TBranch        *b_trkSCT_SCT_outlier_detElementId;   //!
   TBranch        *b_trkSCT_SCT_outlier_detType;   //!
   TBranch        *b_trkSCT_SCT_outlier_bec;   //!
   TBranch        *b_trkSCT_SCT_outlier_layer;   //!
   TBranch        *b_trkSCT_SCT_outlier_sizePhi;   //!
   TBranch        *b_trkSCT_SCT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkSCT_SCT_outlier_locX;   //!
   TBranch        *b_trkSCT_SCT_outlier_locY;   //!
   TBranch        *b_trkSCT_SCT_outlier_incidencePhi;   //!
   TBranch        *b_trkSCT_SCT_outlier_incidenceTheta;   //!
   TBranch        *b_trkSCT_SCT_outlier_err_locX;   //!
   TBranch        *b_trkSCT_SCT_outlier_err_locY;   //!
   TBranch        *b_trkSCT_SCT_outlier_cov_locXY;   //!
   TBranch        *b_trkSCT_SCT_outlier_x;   //!
   TBranch        *b_trkSCT_SCT_outlier_y;   //!
   TBranch        *b_trkSCT_SCT_outlier_z;   //!
   TBranch        *b_trkSCT_SCT_outlier_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_outlier_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_outlier_err_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_outlier_err_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_SCT_outlier_chi2;   //!
   TBranch        *b_trkSCT_SCT_outlier_ndof;   //!
   TBranch        *b_trkSCT_TRT_outlier_n;   //!
   TBranch        *b_trkSCT_TRT_outlier_id;   //!
   TBranch        *b_trkSCT_TRT_outlier_detElementId;   //!
   TBranch        *b_trkSCT_TRT_outlier_detType;   //!
   TBranch        *b_trkSCT_TRT_outlier_bec;   //!
   TBranch        *b_trkSCT_TRT_outlier_layer;   //!
   TBranch        *b_trkSCT_TRT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkSCT_TRT_outlier_locR;   //!
   TBranch        *b_trkSCT_TRT_outlier_err_locR;   //!
   TBranch        *b_trkSCT_TRT_outlier_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_outlier_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_outlier_err_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_outlier_err_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_outlier_cov_trkLocRPhi;   //!
   TBranch        *b_trkSCT_TRT_outlier_TOT;   //!
   TBranch        *b_trkSCT_TRT_outlier_highLevel;   //!
   TBranch        *b_trkSCT_TRT_outlier_trailingEdge;   //!
   TBranch        *b_trkSCT_TRT_outlier_chi2;   //!
   TBranch        *b_trkSCT_TRT_outlier_ndof;   //!
   TBranch        *b_trkSCT_Pixel_hole_n;   //!
   TBranch        *b_trkSCT_Pixel_hole_detElementId;   //!
   TBranch        *b_trkSCT_Pixel_hole_bec;   //!
   TBranch        *b_trkSCT_Pixel_hole_layer;   //!
   TBranch        *b_trkSCT_Pixel_hole_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_hole_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_hole_err_trkLocX;   //!
   TBranch        *b_trkSCT_Pixel_hole_err_trkLocY;   //!
   TBranch        *b_trkSCT_Pixel_hole_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_SCT_hole_n;   //!
   TBranch        *b_trkSCT_SCT_hole_detElementId;   //!
   TBranch        *b_trkSCT_SCT_hole_bec;   //!
   TBranch        *b_trkSCT_SCT_hole_layer;   //!
   TBranch        *b_trkSCT_SCT_hole_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_hole_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_hole_err_trkLocX;   //!
   TBranch        *b_trkSCT_SCT_hole_err_trkLocY;   //!
   TBranch        *b_trkSCT_SCT_hole_cov_trkLocXY;   //!
   TBranch        *b_trkSCT_TRT_hole_n;   //!
   TBranch        *b_trkSCT_TRT_hole_detElementId;   //!
   TBranch        *b_trkSCT_TRT_hole_bec;   //!
   TBranch        *b_trkSCT_TRT_hole_layer;   //!
   TBranch        *b_trkSCT_TRT_hole_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_hole_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_hole_err_trkLocR;   //!
   TBranch        *b_trkSCT_TRT_hole_err_trkLocPhi;   //!
   TBranch        *b_trkSCT_TRT_hole_cov_trkLocRPhi;   //!
   TBranch        *b_trkTRT_n;   //!
   TBranch        *b_trkTRT_d0;   //!
   TBranch        *b_trkTRT_z0;   //!
   TBranch        *b_trkTRT_phi;   //!
   TBranch        *b_trkTRT_theta;   //!
   TBranch        *b_trkTRT_qoverp;   //!
   TBranch        *b_trkTRT_pt;   //!
   TBranch        *b_trkTRT_eta;   //!
   TBranch        *b_trkTRT_err_d0;   //!
   TBranch        *b_trkTRT_err_z0;   //!
   TBranch        *b_trkTRT_err_phi;   //!
   TBranch        *b_trkTRT_err_theta;   //!
   TBranch        *b_trkTRT_err_qoverp;   //!
   TBranch        *b_trkTRT_cov_d0_z0;   //!
   TBranch        *b_trkTRT_cov_d0_phi;   //!
   TBranch        *b_trkTRT_cov_d0_theta;   //!
   TBranch        *b_trkTRT_cov_d0_qoverp;   //!
   TBranch        *b_trkTRT_cov_z0_phi;   //!
   TBranch        *b_trkTRT_cov_z0_theta;   //!
   TBranch        *b_trkTRT_cov_z0_qoverp;   //!
   TBranch        *b_trkTRT_cov_phi_theta;   //!
   TBranch        *b_trkTRT_cov_phi_qoverp;   //!
   TBranch        *b_trkTRT_cov_theta_qoverp;   //!
   TBranch        *b_trkTRT_d0_wrtPV;   //!
   TBranch        *b_trkTRT_z0_wrtPV;   //!
   TBranch        *b_trkTRT_phi_wrtPV;   //!
   TBranch        *b_trkTRT_err_d0_wrtPV;   //!
   TBranch        *b_trkTRT_err_z0_wrtPV;   //!
   TBranch        *b_trkTRT_err_phi_wrtPV;   //!
   TBranch        *b_trkTRT_err_theta_wrtPV;   //!
   TBranch        *b_trkTRT_err_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_cov_d0_z0_wrtPV;   //!
   TBranch        *b_trkTRT_cov_d0_phi_wrtPV;   //!
   TBranch        *b_trkTRT_cov_d0_theta_wrtPV;   //!
   TBranch        *b_trkTRT_cov_d0_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_cov_z0_phi_wrtPV;   //!
   TBranch        *b_trkTRT_cov_z0_theta_wrtPV;   //!
   TBranch        *b_trkTRT_cov_z0_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_cov_phi_theta_wrtPV;   //!
   TBranch        *b_trkTRT_cov_phi_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_cov_theta_qoverp_wrtPV;   //!
   TBranch        *b_trkTRT_d0_wrtBS;   //!
   TBranch        *b_trkTRT_z0_wrtBS;   //!
   TBranch        *b_trkTRT_phi_wrtBS;   //!
   TBranch        *b_trkTRT_err_d0_wrtBS;   //!
   TBranch        *b_trkTRT_err_z0_wrtBS;   //!
   TBranch        *b_trkTRT_err_phi_wrtBS;   //!
   TBranch        *b_trkTRT_err_theta_wrtBS;   //!
   TBranch        *b_trkTRT_err_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_cov_d0_z0_wrtBS;   //!
   TBranch        *b_trkTRT_cov_d0_phi_wrtBS;   //!
   TBranch        *b_trkTRT_cov_d0_theta_wrtBS;   //!
   TBranch        *b_trkTRT_cov_d0_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_cov_z0_phi_wrtBS;   //!
   TBranch        *b_trkTRT_cov_z0_theta_wrtBS;   //!
   TBranch        *b_trkTRT_cov_z0_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_cov_phi_theta_wrtBS;   //!
   TBranch        *b_trkTRT_cov_phi_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_cov_theta_qoverp_wrtBS;   //!
   TBranch        *b_trkTRT_d0_wrtBL;   //!
   TBranch        *b_trkTRT_z0_wrtBL;   //!
   TBranch        *b_trkTRT_phi_wrtBL;   //!
   TBranch        *b_trkTRT_d0_err_wrtBL;   //!
   TBranch        *b_trkTRT_z0_err_wrtBL;   //!
   TBranch        *b_trkTRT_phi_err_wrtBL;   //!
   TBranch        *b_trkTRT_theta_err_wrtBL;   //!
   TBranch        *b_trkTRT_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_d0_z0_err_wrtBL;   //!
   TBranch        *b_trkTRT_d0_phi_err_wrtBL;   //!
   TBranch        *b_trkTRT_d0_theta_err_wrtBL;   //!
   TBranch        *b_trkTRT_d0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_z0_phi_err_wrtBL;   //!
   TBranch        *b_trkTRT_z0_theta_err_wrtBL;   //!
   TBranch        *b_trkTRT_z0_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_phi_theta_err_wrtBL;   //!
   TBranch        *b_trkTRT_phi_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_theta_qoverp_err_wrtBL;   //!
   TBranch        *b_trkTRT_chi2;   //!
   TBranch        *b_trkTRT_ndof;   //!
   TBranch        *b_trkTRT_nBLHits;   //!
   TBranch        *b_trkTRT_nPixHits;   //!
   TBranch        *b_trkTRT_nSCTHits;   //!
   TBranch        *b_trkTRT_nTRTHits;   //!
   TBranch        *b_trkTRT_nTRTHighTHits;   //!
   TBranch        *b_trkTRT_nTRTXenonHits;   //!
   TBranch        *b_trkTRT_nPixHoles;   //!
   TBranch        *b_trkTRT_nSCTHoles;   //!
   TBranch        *b_trkTRT_nTRTHoles;   //!
   TBranch        *b_trkTRT_nPixelDeadSensors;   //!
   TBranch        *b_trkTRT_nSCTDeadSensors;   //!
   TBranch        *b_trkTRT_nBLSharedHits;   //!
   TBranch        *b_trkTRT_nPixSharedHits;   //!
   TBranch        *b_trkTRT_nSCTSharedHits;   //!
   TBranch        *b_trkTRT_nBLayerSplitHits;   //!
   TBranch        *b_trkTRT_nPixSplitHits;   //!
   TBranch        *b_trkTRT_nBLayerOutliers;   //!
   TBranch        *b_trkTRT_nPixelOutliers;   //!
   TBranch        *b_trkTRT_nSCTOutliers;   //!
   TBranch        *b_trkTRT_nTRTOutliers;   //!
   TBranch        *b_trkTRT_nTRTHighTOutliers;   //!
   TBranch        *b_trkTRT_expectBLayerHit;   //!
   TBranch        *b_trkTRT_nHits;   //!
   TBranch        *b_trkTRT_nHoles;   //!
   TBranch        *b_trkTRT_hitPattern;   //!
   TBranch        *b_trkTRT_pixeldEdx;   //!
   TBranch        *b_trkTRT_nGoodHitsPixeldEdx;   //!
   TBranch        *b_trkTRT_massPixeldEdx;   //!
   TBranch        *b_trkTRT_likelihoodsPixeldEdx;   //!
   TBranch        *b_trkTRT_fitter;   //!
   TBranch        *b_trkTRT_patternReco1;   //!
   TBranch        *b_trkTRT_patternReco2;   //!
   TBranch        *b_trkTRT_trackProperties;   //!
   TBranch        *b_trkTRT_particleHypothesis;   //!
   TBranch        *b_trkTRT_blayerPrediction_x;   //!
   TBranch        *b_trkTRT_blayerPrediction_y;   //!
   TBranch        *b_trkTRT_blayerPrediction_z;   //!
   TBranch        *b_trkTRT_blayerPrediction_locX;   //!
   TBranch        *b_trkTRT_blayerPrediction_locY;   //!
   TBranch        *b_trkTRT_blayerPrediction_err_locX;   //!
   TBranch        *b_trkTRT_blayerPrediction_err_locY;   //!
   TBranch        *b_trkTRT_blayerPrediction_etaDistToEdge;   //!
   TBranch        *b_trkTRT_blayerPrediction_phiDistToEdge;   //!
   TBranch        *b_trkTRT_blayerPrediction_detElementId;   //!
   TBranch        *b_trkTRT_blayerPrediction_row;   //!
   TBranch        *b_trkTRT_blayerPrediction_col;   //!
   TBranch        *b_trkTRT_blayerPrediction_type;   //!
   TBranch        *b_trkTRT_Pixel_hit_n;   //!
   TBranch        *b_trkTRT_Pixel_hit_id;   //!
   TBranch        *b_trkTRT_Pixel_hit_detElementId;   //!
   TBranch        *b_trkTRT_Pixel_hit_detType;   //!
   TBranch        *b_trkTRT_Pixel_hit_bec;   //!
   TBranch        *b_trkTRT_Pixel_hit_layer;   //!
   TBranch        *b_trkTRT_Pixel_hit_charge;   //!
   TBranch        *b_trkTRT_Pixel_hit_sizePhi;   //!
   TBranch        *b_trkTRT_Pixel_hit_sizeZ;   //!
   TBranch        *b_trkTRT_Pixel_hit_size;   //!
   TBranch        *b_trkTRT_Pixel_hit_isFake;   //!
   TBranch        *b_trkTRT_Pixel_hit_isGanged;   //!
   TBranch        *b_trkTRT_Pixel_hit_isSplit;   //!
   TBranch        *b_trkTRT_Pixel_hit_splitProb1;   //!
   TBranch        *b_trkTRT_Pixel_hit_splitProb2;   //!
   TBranch        *b_trkTRT_Pixel_hit_isCompetingRIO;   //!
   TBranch        *b_trkTRT_Pixel_hit_locX;   //!
   TBranch        *b_trkTRT_Pixel_hit_locY;   //!
   TBranch        *b_trkTRT_Pixel_hit_incidencePhi;   //!
   TBranch        *b_trkTRT_Pixel_hit_incidenceTheta;   //!
   TBranch        *b_trkTRT_Pixel_hit_err_locX;   //!
   TBranch        *b_trkTRT_Pixel_hit_err_locY;   //!
   TBranch        *b_trkTRT_Pixel_hit_cov_locXY;   //!
   TBranch        *b_trkTRT_Pixel_hit_x;   //!
   TBranch        *b_trkTRT_Pixel_hit_y;   //!
   TBranch        *b_trkTRT_Pixel_hit_z;   //!
   TBranch        *b_trkTRT_Pixel_hit_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_hit_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_hit_err_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_hit_err_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_hit_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_Pixel_hit_chi2;   //!
   TBranch        *b_trkTRT_Pixel_hit_ndof;   //!
   TBranch        *b_trkTRT_SCT_hit_n;   //!
   TBranch        *b_trkTRT_SCT_hit_id;   //!
   TBranch        *b_trkTRT_SCT_hit_detElementId;   //!
   TBranch        *b_trkTRT_SCT_hit_detType;   //!
   TBranch        *b_trkTRT_SCT_hit_bec;   //!
   TBranch        *b_trkTRT_SCT_hit_layer;   //!
   TBranch        *b_trkTRT_SCT_hit_sizePhi;   //!
   TBranch        *b_trkTRT_SCT_hit_isCompetingRIO;   //!
   TBranch        *b_trkTRT_SCT_hit_locX;   //!
   TBranch        *b_trkTRT_SCT_hit_locY;   //!
   TBranch        *b_trkTRT_SCT_hit_incidencePhi;   //!
   TBranch        *b_trkTRT_SCT_hit_incidenceTheta;   //!
   TBranch        *b_trkTRT_SCT_hit_err_locX;   //!
   TBranch        *b_trkTRT_SCT_hit_err_locY;   //!
   TBranch        *b_trkTRT_SCT_hit_cov_locXY;   //!
   TBranch        *b_trkTRT_SCT_hit_x;   //!
   TBranch        *b_trkTRT_SCT_hit_y;   //!
   TBranch        *b_trkTRT_SCT_hit_z;   //!
   TBranch        *b_trkTRT_SCT_hit_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_hit_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_hit_err_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_hit_err_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_hit_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_SCT_hit_chi2;   //!
   TBranch        *b_trkTRT_SCT_hit_ndof;   //!
   TBranch        *b_trkTRT_TRT_hit_n;   //!
   TBranch        *b_trkTRT_TRT_hit_id;   //!
   TBranch        *b_trkTRT_TRT_hit_detElementId;   //!
   TBranch        *b_trkTRT_TRT_hit_detType;   //!
   TBranch        *b_trkTRT_TRT_hit_bec;   //!
   TBranch        *b_trkTRT_TRT_hit_layer;   //!
   TBranch        *b_trkTRT_TRT_hit_isCompetingRIO;   //!
   TBranch        *b_trkTRT_TRT_hit_locR;   //!
   TBranch        *b_trkTRT_TRT_hit_err_locR;   //!
   TBranch        *b_trkTRT_TRT_hit_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_hit_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_hit_err_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_hit_err_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_hit_cov_trkLocRPhi;   //!
   TBranch        *b_trkTRT_TRT_hit_TOT;   //!
   TBranch        *b_trkTRT_TRT_hit_highLevel;   //!
   TBranch        *b_trkTRT_TRT_hit_trailingEdge;   //!
   TBranch        *b_trkTRT_TRT_hit_chi2;   //!
   TBranch        *b_trkTRT_TRT_hit_ndof;   //!
   TBranch        *b_trkTRT_Pixel_outlier_n;   //!
   TBranch        *b_trkTRT_Pixel_outlier_id;   //!
   TBranch        *b_trkTRT_Pixel_outlier_detElementId;   //!
   TBranch        *b_trkTRT_Pixel_outlier_detType;   //!
   TBranch        *b_trkTRT_Pixel_outlier_bec;   //!
   TBranch        *b_trkTRT_Pixel_outlier_layer;   //!
   TBranch        *b_trkTRT_Pixel_outlier_charge;   //!
   TBranch        *b_trkTRT_Pixel_outlier_sizePhi;   //!
   TBranch        *b_trkTRT_Pixel_outlier_sizeZ;   //!
   TBranch        *b_trkTRT_Pixel_outlier_size;   //!
   TBranch        *b_trkTRT_Pixel_outlier_isFake;   //!
   TBranch        *b_trkTRT_Pixel_outlier_isGanged;   //!
   TBranch        *b_trkTRT_Pixel_outlier_isSplit;   //!
   TBranch        *b_trkTRT_Pixel_outlier_splitProb1;   //!
   TBranch        *b_trkTRT_Pixel_outlier_splitProb2;   //!
   TBranch        *b_trkTRT_Pixel_outlier_isCompetingRIO;   //!
   TBranch        *b_trkTRT_Pixel_outlier_locX;   //!
   TBranch        *b_trkTRT_Pixel_outlier_locY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_incidencePhi;   //!
   TBranch        *b_trkTRT_Pixel_outlier_incidenceTheta;   //!
   TBranch        *b_trkTRT_Pixel_outlier_err_locX;   //!
   TBranch        *b_trkTRT_Pixel_outlier_err_locY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_cov_locXY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_x;   //!
   TBranch        *b_trkTRT_Pixel_outlier_y;   //!
   TBranch        *b_trkTRT_Pixel_outlier_z;   //!
   TBranch        *b_trkTRT_Pixel_outlier_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_outlier_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_err_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_outlier_err_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_Pixel_outlier_chi2;   //!
   TBranch        *b_trkTRT_Pixel_outlier_ndof;   //!
   TBranch        *b_trkTRT_SCT_outlier_n;   //!
   TBranch        *b_trkTRT_SCT_outlier_id;   //!
   TBranch        *b_trkTRT_SCT_outlier_detElementId;   //!
   TBranch        *b_trkTRT_SCT_outlier_detType;   //!
   TBranch        *b_trkTRT_SCT_outlier_bec;   //!
   TBranch        *b_trkTRT_SCT_outlier_layer;   //!
   TBranch        *b_trkTRT_SCT_outlier_sizePhi;   //!
   TBranch        *b_trkTRT_SCT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkTRT_SCT_outlier_locX;   //!
   TBranch        *b_trkTRT_SCT_outlier_locY;   //!
   TBranch        *b_trkTRT_SCT_outlier_incidencePhi;   //!
   TBranch        *b_trkTRT_SCT_outlier_incidenceTheta;   //!
   TBranch        *b_trkTRT_SCT_outlier_err_locX;   //!
   TBranch        *b_trkTRT_SCT_outlier_err_locY;   //!
   TBranch        *b_trkTRT_SCT_outlier_cov_locXY;   //!
   TBranch        *b_trkTRT_SCT_outlier_x;   //!
   TBranch        *b_trkTRT_SCT_outlier_y;   //!
   TBranch        *b_trkTRT_SCT_outlier_z;   //!
   TBranch        *b_trkTRT_SCT_outlier_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_outlier_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_outlier_err_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_outlier_err_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_outlier_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_SCT_outlier_chi2;   //!
   TBranch        *b_trkTRT_SCT_outlier_ndof;   //!
   TBranch        *b_trkTRT_TRT_outlier_n;   //!
   TBranch        *b_trkTRT_TRT_outlier_id;   //!
   TBranch        *b_trkTRT_TRT_outlier_detElementId;   //!
   TBranch        *b_trkTRT_TRT_outlier_detType;   //!
   TBranch        *b_trkTRT_TRT_outlier_bec;   //!
   TBranch        *b_trkTRT_TRT_outlier_layer;   //!
   TBranch        *b_trkTRT_TRT_outlier_isCompetingRIO;   //!
   TBranch        *b_trkTRT_TRT_outlier_locR;   //!
   TBranch        *b_trkTRT_TRT_outlier_err_locR;   //!
   TBranch        *b_trkTRT_TRT_outlier_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_outlier_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_outlier_err_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_outlier_err_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_outlier_cov_trkLocRPhi;   //!
   TBranch        *b_trkTRT_TRT_outlier_TOT;   //!
   TBranch        *b_trkTRT_TRT_outlier_highLevel;   //!
   TBranch        *b_trkTRT_TRT_outlier_trailingEdge;   //!
   TBranch        *b_trkTRT_TRT_outlier_chi2;   //!
   TBranch        *b_trkTRT_TRT_outlier_ndof;   //!
   TBranch        *b_trkTRT_Pixel_hole_n;   //!
   TBranch        *b_trkTRT_Pixel_hole_detElementId;   //!
   TBranch        *b_trkTRT_Pixel_hole_bec;   //!
   TBranch        *b_trkTRT_Pixel_hole_layer;   //!
   TBranch        *b_trkTRT_Pixel_hole_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_hole_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_hole_err_trkLocX;   //!
   TBranch        *b_trkTRT_Pixel_hole_err_trkLocY;   //!
   TBranch        *b_trkTRT_Pixel_hole_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_SCT_hole_n;   //!
   TBranch        *b_trkTRT_SCT_hole_detElementId;   //!
   TBranch        *b_trkTRT_SCT_hole_bec;   //!
   TBranch        *b_trkTRT_SCT_hole_layer;   //!
   TBranch        *b_trkTRT_SCT_hole_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_hole_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_hole_err_trkLocX;   //!
   TBranch        *b_trkTRT_SCT_hole_err_trkLocY;   //!
   TBranch        *b_trkTRT_SCT_hole_cov_trkLocXY;   //!
   TBranch        *b_trkTRT_TRT_hole_n;   //!
   TBranch        *b_trkTRT_TRT_hole_detElementId;   //!
   TBranch        *b_trkTRT_TRT_hole_bec;   //!
   TBranch        *b_trkTRT_TRT_hole_layer;   //!
   TBranch        *b_trkTRT_TRT_hole_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_hole_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_hole_err_trkLocR;   //!
   TBranch        *b_trkTRT_TRT_hole_err_trkLocPhi;   //!
   TBranch        *b_trkTRT_TRT_hole_cov_trkLocRPhi;   //!
   TBranch        *b_v0_n;   //!
   TBranch        *b_v0_ksMass;   //!
   TBranch        *b_v0_lambda1Mass;   //!
   TBranch        *b_v0_lambda2Mass;   //!
   TBranch        *b_v0_vertexProb;   //!
   TBranch        *b_v0_vertexChi2;   //!
   TBranch        *b_v0_ksPt;   //!
   TBranch        *b_v0_ksPx;   //!
   TBranch        *b_v0_ksPy;   //!
   TBranch        *b_v0_ksEta;   //!
   TBranch        *b_v0_ksPhi;   //!
   TBranch        *b_v0_ksMomentum;   //!
   TBranch        *b_v0_flightX;   //!
   TBranch        *b_v0_flightY;   //!
   TBranch        *b_v0_cosThetaPointing;   //!
   TBranch        *b_v0_totalFlightDistance;   //!
   TBranch        *b_v0_properDecayTime;   //!
   TBranch        *b_v0_properFlightDist;   //!
   TBranch        *b_v0_flightX_BS;   //!
   TBranch        *b_v0_flightY_BS;   //!
   TBranch        *b_v0_cosThetaPointing_BS;   //!
   TBranch        *b_v0_totalFlightDistance_BS;   //!
   TBranch        *b_v0_properDecayTime_BS;   //!
   TBranch        *b_v0_properFlightDist_BS;   //!
   TBranch        *b_v0_radius;   //!
   TBranch        *b_v0_thetaPiPlus;   //!
   TBranch        *b_v0_thetaPiMinus;   //!
   TBranch        *b_v0_trk_L;   //!
   TBranch        *b_v0_trk_T;   //!
   TBranch        *b_v0_thetaStarPiPlus;   //!
   TBranch        *b_v0_thetaStarPiMinus;   //!
   TBranch        *b_v0_trkPt_SV;   //!
   TBranch        *b_v0_trkEta_SV;   //!
   TBranch        *b_v0_trkPhi_SV;   //!
   TBranch        *b_v0_x;   //!
   TBranch        *b_v0_y;   //!
   TBranch        *b_v0_z;   //!
   TBranch        *b_v0_err_x;   //!
   TBranch        *b_v0_err_y;   //!
   TBranch        *b_v0_err_z;   //!
   TBranch        *b_v0_cov_xy;   //!
   TBranch        *b_v0_cov_xz;   //!
   TBranch        *b_v0_cov_yz;   //!
   TBranch        *b_v0_type;   //!
   TBranch        *b_v0_chi2;   //!
   TBranch        *b_v0_ndof;   //!
   TBranch        *b_v0_px;   //!
   TBranch        *b_v0_py;   //!
   TBranch        *b_v0_pz;   //!
   TBranch        *b_v0_E;   //!
   TBranch        *b_v0_m;   //!
   TBranch        *b_v0_nTracks;   //!
   TBranch        *b_v0_sumPt;   //!
   TBranch        *b_v0_trk_weight;   //!
   TBranch        *b_v0_trk_n;   //!
   TBranch        *b_v0_trk_index;   //!
   TBranch        *b_secVx_n;   //!
   TBranch        *b_secVx_x;   //!
   TBranch        *b_secVx_y;   //!
   TBranch        *b_secVx_z;   //!
   TBranch        *b_secVx_err_x;   //!
   TBranch        *b_secVx_err_y;   //!
   TBranch        *b_secVx_err_z;   //!
   TBranch        *b_secVx_cov_xy;   //!
   TBranch        *b_secVx_cov_xz;   //!
   TBranch        *b_secVx_cov_yz;   //!
   TBranch        *b_secVx_type;   //!
   TBranch        *b_secVx_chi2;   //!
   TBranch        *b_secVx_ndof;   //!
   TBranch        *b_secVx_px;   //!
   TBranch        *b_secVx_py;   //!
   TBranch        *b_secVx_pz;   //!
   TBranch        *b_secVx_E;   //!
   TBranch        *b_secVx_m;   //!
   TBranch        *b_secVx_nTracks;   //!
   TBranch        *b_secVx_sumPt;   //!
   TBranch        *b_secVx_trk_weight;   //!
   TBranch        *b_secVx_trk_n;   //!
   TBranch        *b_secVx_trk_index;   //!
   TBranch        *b_lucidRaw_word0;   //!
   TBranch        *b_lucidRaw_word1;   //!
   TBranch        *b_lucidRaw_word2;   //!
   TBranch        *b_lucidRaw_word3;   //!
   TBranch        *b_lucidRaw_word0p;   //!
   TBranch        *b_lucidRaw_word1p;   //!
   TBranch        *b_lucidRaw_word2p;   //!
   TBranch        *b_lucidRaw_word3p;   //!
   TBranch        *b_lucidRaw_word0n;   //!
   TBranch        *b_lucidRaw_word1n;   //!
   TBranch        *b_lucidRaw_word2n;   //!
   TBranch        *b_lucidRaw_word3n;   //!
   TBranch        *b_lucidRaw_status;   //!
   TBranch        *b_lucidRaw_totalHits;   //!
   TBranch        *b_lucidRaw_ASideHits;   //!
   TBranch        *b_lucidRaw_CSideHits;   //!
   TBranch        *b_Zdc_n;   //!
   TBranch        *b_Zdc_Energy_Vec;   //!
   TBranch        *b_Zdc_Time_Vec;   //!
   TBranch        *b_Zdc_Vec_Size;   //!
   TBranch        *b_Zdc_Energy_LG;   //!
   TBranch        *b_Zdc_Time_LG;   //!
   TBranch        *b_Zdc_Energy_HG;   //!
   TBranch        *b_Zdc_Time_HG;   //!
   TBranch        *b_Zdc_Id;   //!
   TBranch        *b_Zdc_Side;   //!
   TBranch        *b_Zdc_Type;   //!
   TBranch        *b_Zdc_Module;   //!
   TBranch        *b_Zdc_Channel;   //!
   TBranch        *b_Zdc_TimeCalib;   //!
   TBranch        *b_Zdc_RecMethod;   //!
   TBranch        *b_ZdcDigits_n;   //!
   TBranch        *b_ZdcDigits_dig_g0d0;   //!
   TBranch        *b_ZdcDigits_dig_g0d1;   //!
   TBranch        *b_ZdcDigits_dig_g1d0;   //!
   TBranch        *b_ZdcDigits_dig_g1d1;   //!
   TBranch        *b_ZdcDigits_Id;   //!
   TBranch        *b_ZdcDigits_Side;   //!
   TBranch        *b_ZdcDigits_Type;   //!
   TBranch        *b_ZdcDigits_Module;   //!
   TBranch        *b_ZdcDigits_Channel;   //!
   TBranch        *b_mbtime_timeDiff;   //!
   TBranch        *b_mbtime_timeA;   //!
   TBranch        *b_mbtime_timeC;   //!
   TBranch        *b_mbtime_countA;   //!
   TBranch        *b_mbtime_countC;   //!
   TBranch        *b_bkgword_MBTSTimeHaloBit;   //!
   TBranch        *b_bkgword_MBTSTimeColBit;   //!
   TBranch        *b_bkgword_LArECTimeHaloBit;   //!
   TBranch        *b_bkgword_LArECTimeColBit;   //!
   TBranch        *b_bkgword_PixMultiHugeBit;   //!
   TBranch        *b_bkgword_PixSPNonEmptyBit;   //!
   TBranch        *b_bkgword_SCTMultiHugeBit;   //!
   TBranch        *b_bkgword_SCTSPNonEmptyBit;   //!
   TBranch        *b_bkgword_CSCTimeHaloBit;   //!
   TBranch        *b_bkgword_CSCTimeColBit;   //!
   TBranch        *b_bkgword_BCMTimeHaloBit;   //!
   TBranch        *b_bkgword_BCMTimeColBit;   //!
   TBranch        *b_bkgword_MuonTimingColBit;   //!
   TBranch        *b_bkgword_MuonTimingCosmicBit;   //!
   TBranch        *b_bkgword_MBTSBeamVetoBit;   //!
   TBranch        *b_bkgword_BCMBeamVetoBit;   //!
   TBranch        *b_bkgword_LUCIDBeamVetoBit;   //!
   TBranch        *b_bkgword_HaloMuonSegment;   //!
   TBranch        *b_bkgword_HaloClusterShape;   //!
   TBranch        *b_bkgword_HaloMuonOneSided;   //!
   TBranch        *b_bkgword_HaloMuonTwoSided;   //!
   TBranch        *b_bkgword_HaloTileClusterPattern;   //!
   TBranch        *b_bkgword_BeamGasPixel;   //!
   TBranch        *b_bkgword_CosmicStandAlone;   //!
   TBranch        *b_bkgword_CosmicStandAloneTight;   //!
   TBranch        *b_bkgword_CosmicCombined;   //!
   TBranch        *b_bkgword_CosmicCombinedTight;   //!
   TBranch        *b_bkgword_BkgdResvBit1;   //!
   TBranch        *b_bkgword_BkgdResvBit2;   //!
   TBranch        *b_bkgword_BkgdResvBit3;   //!
   TBranch        *b_bkgword_BkgdResvBit4;   //!
   TBranch        *b_bkgword_BkgdResvBit5;   //!
   TBranch        *b_bkgword_BkgWord;   //!
   TBranch        *b_vxbc_n;   //!
   TBranch        *b_vxbc_x;   //!
   TBranch        *b_vxbc_y;   //!
   TBranch        *b_vxbc_z;   //!
   TBranch        *b_vxbc_err_x;   //!
   TBranch        *b_vxbc_err_y;   //!
   TBranch        *b_vxbc_err_z;   //!
   TBranch        *b_vxbc_cov_xy;   //!
   TBranch        *b_vxbc_cov_xz;   //!
   TBranch        *b_vxbc_cov_yz;   //!
   TBranch        *b_vxbc_type;   //!
   TBranch        *b_vxbc_chi2;   //!
   TBranch        *b_vxbc_ndof;   //!
   TBranch        *b_vxbc_px;   //!
   TBranch        *b_vxbc_py;   //!
   TBranch        *b_vxbc_pz;   //!
   TBranch        *b_vxbc_E;   //!
   TBranch        *b_vxbc_m;   //!
   TBranch        *b_vxbc_nTracks;   //!
   TBranch        *b_vxbc_sumPt;   //!
   TBranch        *b_vxbc_trk_weight;   //!
   TBranch        *b_vxbc_trk_n;   //!
   TBranch        *b_vxbc_trk_index;   //!
   TBranch        *b_cl_had_n;   //!
   TBranch        *b_cl_had_E;   //!
   TBranch        *b_cl_had_pt;   //!
   TBranch        *b_cl_had_eta;   //!
   TBranch        *b_cl_had_phi;   //!
   TBranch        *b_cl_had_E_em;   //!
   TBranch        *b_cl_had_E_had;   //!
   TBranch        *b_cl_had_center_lambda;   //!
   TBranch        *b_cl_had_lateral;   //!
   TBranch        *b_cl_had_longitudinal;   //!
   TBranch        *b_cl_had_isolation;   //!
   TBranch        *b_cl_had_significance;   //!
   TBranch        *b_cl_had_cellSignificance;   //!
   TBranch        *b_cl_had_cellSigSampling;   //!
   TBranch        *b_cl_em_n;   //!
   TBranch        *b_cl_em_E;   //!
   TBranch        *b_cl_em_pt;   //!
   TBranch        *b_cl_em_eta;   //!
   TBranch        *b_cl_em_phi;   //!
   TBranch        *b_cl_em_E_em;   //!
   TBranch        *b_cl_em_E_had;   //!

   MinBiasTree();
   virtual ~MinBiasTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t GetNEntries();
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);

 static MinBiasTree* getInstance();
       
 private:
    static MinBiasTree* gMBT;
  

 ClassDef(MinBiasTree,1); 
};


#endif  //  End of CLASS  MinBiasTree

