 #ifndef xrRender_consoleH
 #define xrRender_consoleH
 #pragma once
 
 // Common
 extern ECORE_API int            ps_r__Supersample;
 extern ECORE_API int            ps_r__Anisotropic;
 extern ECORE_API int            ps_r__LightSleepFrames;
 
 extern ECORE_API float          ps_r__Detail_w_rot1;
 extern ECORE_API float          ps_r__Detail_w_rot2;
 extern ECORE_API float          ps_r__Detail_w_speed;
 extern ECORE_API float          ps_r__Detail_w_amp1;
 extern ECORE_API float          ps_r__Detail_w_amp2;
 extern ECORE_API float          ps_r__Detail_l_ambient;
 extern ECORE_API float          ps_r__Detail_l_aniso;
 extern ECORE_API float          ps_r__Detail_density;
 extern ECORE_API float          ps_r__Detail_rainbow_hemi;
 
 extern ECORE_API float          ps_r__Tree_w_rot;
 extern ECORE_API float          ps_r__Tree_w_speed;
 extern ECORE_API float          ps_r__Tree_w_amp;
 extern ECORE_API Fvector        ps_r__Tree_Wave;
 
 // R1
 extern ECORE_API float          ps_r1_ssaDISCARD;
 extern ECORE_API float          ps_r1_ssaDONTSORT;
 extern ECORE_API float          ps_r1_ssaLOD_A;
 extern ECORE_API float          ps_r1_ssaLOD_B;
 extern ECORE_API float          ps_r1_ssaHZBvsTEX;
 
 // R1-specific
 extern ECORE_API int            ps_r1_GlowsPerFrame;    // r1-only
 extern ECORE_API int            ps_r1_SH_Blur;          // r1-only
 
 // R2
 extern ECORE_API float          ps_r2_ssaDISCARD;
 extern ECORE_API float          ps_r2_ssaDONTSORT;
 extern ECORE_API float          ps_r2_ssaLOD_A;
 extern ECORE_API float          ps_r2_ssaLOD_B;
 extern ECORE_API float          ps_r2_ssaHZBvsTEX;
 
 // R2-specific
 extern ECORE_API Flags32        ps_r2_ls_flags;             // r2-only
 extern ECORE_API float          ps_r2_df_parallaxh;         // r2-only
 extern ECORE_API float          ps_r2_tonemap_middlegray;   // r2-only
 extern ECORE_API float          ps_r2_tonemap_adaptation;   // r2-only
 extern ECORE_API float          ps_r2_tonemap_low_lum;      // r2-only
 extern ECORE_API float          ps_r2_ls_dynamic_range;     // r2-only
 extern ECORE_API float          ps_r2_ls_bloom_kernel_g;    // r2-only  // gauss
 extern ECORE_API float          ps_r2_ls_bloom_kernel_b;    // r2-only  // bilinear
 extern ECORE_API float          ps_r2_ls_bloom_threshold;   // r2-only
 extern ECORE_API float          ps_r2_ls_bloom_speed;       // r2-only
 extern ECORE_API float          ps_r2_ls_dsm_kernel;        // r2-only
 extern ECORE_API float          ps_r2_ls_psm_kernel;        // r2-only
 extern ECORE_API float          ps_r2_ls_ssm_kernel;        // r2-only
 extern ECORE_API Fvector        ps_r2_aa_barier;            // r2-only
 extern ECORE_API Fvector        ps_r2_aa_weight;            // r2-only
 extern ECORE_API float          ps_r2_aa_kernel;            // r2-only
 extern ECORE_API int            ps_r2_GI_depth;             // 1..5
 extern ECORE_API int            ps_r2_GI_photons;           // 8..256
 extern ECORE_API float          ps_r2_GI_clip;              // EPS
 extern ECORE_API float          ps_r2_GI_refl;              // .9f
 extern ECORE_API float          ps_r2_emap_height;          // 0.05f
 extern ECORE_API float          ps_r2_emap_range;           // 30.f
 extern ECORE_API int            ps_r2_emap_slices;          // 4
 
 enum
 {
     R2FLAG_SUN          = (1<<0),
     R2FLAG_SKY          = (1<<1),
     R2FLAG_AA           = (1<<2),
     R2FLAG_PARALLAX     = (1<<3),
     R2FLAG_GI           = (1<<4),
     R2FLAG_FASTBLOOM    = (1<<5),
 };
 
 extern void                     xrRender_initconsole    ();
 #endif




