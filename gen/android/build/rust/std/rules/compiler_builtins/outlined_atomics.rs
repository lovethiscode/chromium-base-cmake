#[macro_export] macro_rules! foreach_cas { ($macro:path) => {
$macro!( Relaxed, 1, __aarch64_cas1_relax );
$macro!( Relaxed, 2, __aarch64_cas2_relax );
$macro!( Relaxed, 4, __aarch64_cas4_relax );
$macro!( Relaxed, 8, __aarch64_cas8_relax );
$macro!( Acquire, 1, __aarch64_cas1_acq );
$macro!( Acquire, 2, __aarch64_cas2_acq );
$macro!( Acquire, 4, __aarch64_cas4_acq );
$macro!( Acquire, 8, __aarch64_cas8_acq );
$macro!( Release, 1, __aarch64_cas1_rel );
$macro!( Release, 2, __aarch64_cas2_rel );
$macro!( Release, 4, __aarch64_cas4_rel );
$macro!( Release, 8, __aarch64_cas8_rel );
$macro!( AcqRel, 1, __aarch64_cas1_acq_rel );
$macro!( AcqRel, 2, __aarch64_cas2_acq_rel );
$macro!( AcqRel, 4, __aarch64_cas4_acq_rel );
$macro!( AcqRel, 8, __aarch64_cas8_acq_rel );
}; }
#[macro_export] macro_rules! foreach_ldadd { ($macro:path) => {
$macro!( Relaxed, 1, __aarch64_ldadd1_relax );
$macro!( Relaxed, 2, __aarch64_ldadd2_relax );
$macro!( Relaxed, 4, __aarch64_ldadd4_relax );
$macro!( Relaxed, 8, __aarch64_ldadd8_relax );
$macro!( Acquire, 1, __aarch64_ldadd1_acq );
$macro!( Acquire, 2, __aarch64_ldadd2_acq );
$macro!( Acquire, 4, __aarch64_ldadd4_acq );
$macro!( Acquire, 8, __aarch64_ldadd8_acq );
$macro!( Release, 1, __aarch64_ldadd1_rel );
$macro!( Release, 2, __aarch64_ldadd2_rel );
$macro!( Release, 4, __aarch64_ldadd4_rel );
$macro!( Release, 8, __aarch64_ldadd8_rel );
$macro!( AcqRel, 1, __aarch64_ldadd1_acq_rel );
$macro!( AcqRel, 2, __aarch64_ldadd2_acq_rel );
$macro!( AcqRel, 4, __aarch64_ldadd4_acq_rel );
$macro!( AcqRel, 8, __aarch64_ldadd8_acq_rel );
}; }
#[macro_export] macro_rules! foreach_ldclr { ($macro:path) => {
$macro!( Relaxed, 1, __aarch64_ldclr1_relax );
$macro!( Relaxed, 2, __aarch64_ldclr2_relax );
$macro!( Relaxed, 4, __aarch64_ldclr4_relax );
$macro!( Relaxed, 8, __aarch64_ldclr8_relax );
$macro!( Acquire, 1, __aarch64_ldclr1_acq );
$macro!( Acquire, 2, __aarch64_ldclr2_acq );
$macro!( Acquire, 4, __aarch64_ldclr4_acq );
$macro!( Acquire, 8, __aarch64_ldclr8_acq );
$macro!( Release, 1, __aarch64_ldclr1_rel );
$macro!( Release, 2, __aarch64_ldclr2_rel );
$macro!( Release, 4, __aarch64_ldclr4_rel );
$macro!( Release, 8, __aarch64_ldclr8_rel );
$macro!( AcqRel, 1, __aarch64_ldclr1_acq_rel );
$macro!( AcqRel, 2, __aarch64_ldclr2_acq_rel );
$macro!( AcqRel, 4, __aarch64_ldclr4_acq_rel );
$macro!( AcqRel, 8, __aarch64_ldclr8_acq_rel );
}; }
#[macro_export] macro_rules! foreach_ldeor { ($macro:path) => {
$macro!( Relaxed, 1, __aarch64_ldeor1_relax );
$macro!( Relaxed, 2, __aarch64_ldeor2_relax );
$macro!( Relaxed, 4, __aarch64_ldeor4_relax );
$macro!( Relaxed, 8, __aarch64_ldeor8_relax );
$macro!( Acquire, 1, __aarch64_ldeor1_acq );
$macro!( Acquire, 2, __aarch64_ldeor2_acq );
$macro!( Acquire, 4, __aarch64_ldeor4_acq );
$macro!( Acquire, 8, __aarch64_ldeor8_acq );
$macro!( Release, 1, __aarch64_ldeor1_rel );
$macro!( Release, 2, __aarch64_ldeor2_rel );
$macro!( Release, 4, __aarch64_ldeor4_rel );
$macro!( Release, 8, __aarch64_ldeor8_rel );
$macro!( AcqRel, 1, __aarch64_ldeor1_acq_rel );
$macro!( AcqRel, 2, __aarch64_ldeor2_acq_rel );
$macro!( AcqRel, 4, __aarch64_ldeor4_acq_rel );
$macro!( AcqRel, 8, __aarch64_ldeor8_acq_rel );
}; }
#[macro_export] macro_rules! foreach_ldset { ($macro:path) => {
$macro!( Relaxed, 1, __aarch64_ldset1_relax );
$macro!( Relaxed, 2, __aarch64_ldset2_relax );
$macro!( Relaxed, 4, __aarch64_ldset4_relax );
$macro!( Relaxed, 8, __aarch64_ldset8_relax );
$macro!( Acquire, 1, __aarch64_ldset1_acq );
$macro!( Acquire, 2, __aarch64_ldset2_acq );
$macro!( Acquire, 4, __aarch64_ldset4_acq );
$macro!( Acquire, 8, __aarch64_ldset8_acq );
$macro!( Release, 1, __aarch64_ldset1_rel );
$macro!( Release, 2, __aarch64_ldset2_rel );
$macro!( Release, 4, __aarch64_ldset4_rel );
$macro!( Release, 8, __aarch64_ldset8_rel );
$macro!( AcqRel, 1, __aarch64_ldset1_acq_rel );
$macro!( AcqRel, 2, __aarch64_ldset2_acq_rel );
$macro!( AcqRel, 4, __aarch64_ldset4_acq_rel );
$macro!( AcqRel, 8, __aarch64_ldset8_acq_rel );
}; }
#[macro_export] macro_rules! foreach_swp { ($macro:path) => {
$macro!( Relaxed, 1, __aarch64_swp1_relax );
$macro!( Relaxed, 2, __aarch64_swp2_relax );
$macro!( Relaxed, 4, __aarch64_swp4_relax );
$macro!( Relaxed, 8, __aarch64_swp8_relax );
$macro!( Acquire, 1, __aarch64_swp1_acq );
$macro!( Acquire, 2, __aarch64_swp2_acq );
$macro!( Acquire, 4, __aarch64_swp4_acq );
$macro!( Acquire, 8, __aarch64_swp8_acq );
$macro!( Release, 1, __aarch64_swp1_rel );
$macro!( Release, 2, __aarch64_swp2_rel );
$macro!( Release, 4, __aarch64_swp4_rel );
$macro!( Release, 8, __aarch64_swp8_rel );
$macro!( AcqRel, 1, __aarch64_swp1_acq_rel );
$macro!( AcqRel, 2, __aarch64_swp2_acq_rel );
$macro!( AcqRel, 4, __aarch64_swp4_acq_rel );
$macro!( AcqRel, 8, __aarch64_swp8_acq_rel );
}; }
#[macro_export] macro_rules! foreach_cas16 { ($macro:path) => {
$macro!( Relaxed, __aarch64_cas16_relax );
$macro!( Acquire, __aarch64_cas16_acq );
$macro!( Release, __aarch64_cas16_rel );
$macro!( AcqRel, __aarch64_cas16_acq_rel );
}; }
