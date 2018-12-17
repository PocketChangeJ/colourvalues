#include <Rcpp.h>
#include "colourvalues/palettes.hpp"
using namespace Rcpp;

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_viridis() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::viridis_red,
    _["green"] = colourvalues::palette::viridis_green,
    _["blue"] = colourvalues::palette::viridis_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_inferno() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::inferno_red,
    _["green"] = colourvalues::palette::inferno_green,
    _["blue"] = colourvalues::palette::inferno_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_magma() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::magma_red,
    _["green"] = colourvalues::palette::magma_green,
    _["blue"] = colourvalues::palette::magma_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_plasma() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::plasma_red,
    _["green"] = colourvalues::palette::plasma_green,
    _["blue"] = colourvalues::palette::plasma_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_cividis() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::cividis_red,
    _["green"] = colourvalues::palette::cividis_green,
    _["blue"] = colourvalues::palette::cividis_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_terrain() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::terrain_red,
    _["green"] = colourvalues::palette::terrain_green,
    _["blue"] = colourvalues::palette::terrain_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_topo() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::topo_red,
    _["green"] = colourvalues::palette::topo_green,
    _["blue"] = colourvalues::palette::topo_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_heat() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::heat_red,
    _["green"] = colourvalues::palette::heat_green,
    _["blue"] = colourvalues::palette::heat_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_ylorrd() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::ylorrd_red,
    _["green"] = colourvalues::palette::ylorrd_green,
    _["blue"] = colourvalues::palette::ylorrd_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_ylorbr() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::ylorbr_red,
    _["green"] = colourvalues::palette::ylorbr_green,
    _["blue"] = colourvalues::palette::ylorbr_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_ylgnbu() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::ylgnbu_red,
    _["green"] = colourvalues::palette::ylgnbu_green,
    _["blue"] = colourvalues::palette::ylgnbu_blue
  );
}

// [[Rcpp::export]]
Rcpp::DataFrame rcpp_ylgn() {
  return Rcpp::DataFrame::create(
    _["red"] = colourvalues::palette::ylgn_red,
    _["green"] = colourvalues::palette::ylgn_green,
    _["blue"] = colourvalues::palette::ylgn_blue
  );
}

// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_reds() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::reds_red,
   _["green"] = colourvalues::palette::reds_green,
   _["blue"] = colourvalues::palette::reds_blue
);
}

// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_rdpu() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::rdpu_red,
   _["green"] = colourvalues::palette::rdpu_green,
   _["blue"] = colourvalues::palette::rdpu_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_purples() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::purples_red,
   _["green"] = colourvalues::palette::purples_green,
   _["blue"] = colourvalues::palette::purples_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_purd() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::purd_red,
   _["green"] = colourvalues::palette::purd_green,
   _["blue"] = colourvalues::palette::purd_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_pubugn() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::pubugn_red,
   _["green"] = colourvalues::palette::pubugn_green,
   _["blue"] = colourvalues::palette::pubugn_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_pubu() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::pubu_red,
   _["green"] = colourvalues::palette::pubu_green,
   _["blue"] = colourvalues::palette::pubu_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_orrd() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::orrd_red,
   _["green"] = colourvalues::palette::orrd_green,
   _["blue"] = colourvalues::palette::orrd_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_oranges() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::oranges_red,
   _["green"] = colourvalues::palette::oranges_green,
   _["blue"] = colourvalues::palette::oranges_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_greys() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::greys_red,
   _["green"] = colourvalues::palette::greys_green,
   _["blue"] = colourvalues::palette::greys_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_greens() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::greens_red,
   _["green"] = colourvalues::palette::greens_green,
   _["blue"] = colourvalues::palette::greens_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_gnbu() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::gnbu_red,
   _["green"] = colourvalues::palette::gnbu_green,
   _["blue"] = colourvalues::palette::gnbu_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_bupu() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::bupu_red,
   _["green"] = colourvalues::palette::bupu_green,
   _["blue"] = colourvalues::palette::bupu_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_bugn() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::bugn_red,
   _["green"] = colourvalues::palette::bugn_green,
   _["blue"] = colourvalues::palette::bugn_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_blues() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::blues_red,
   _["green"] = colourvalues::palette::blues_green,
   _["blue"] = colourvalues::palette::blues_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_spectral() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::spectral_red,
   _["green"] = colourvalues::palette::spectral_green,
   _["blue"] = colourvalues::palette::spectral_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_rdylgn() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::rdylgn_red,
   _["green"] = colourvalues::palette::rdylgn_green,
   _["blue"] = colourvalues::palette::rdylgn_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_rdylbu() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::rdylbu_red,
   _["green"] = colourvalues::palette::rdylbu_green,
   _["blue"] = colourvalues::palette::rdylbu_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_rdgy() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::rdgy_red,
   _["green"] = colourvalues::palette::rdgy_green,
   _["blue"] = colourvalues::palette::rdgy_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_rdbu() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::rdbu_red,
   _["green"] = colourvalues::palette::rdbu_green,
   _["blue"] = colourvalues::palette::rdbu_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_puor() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::puor_red,
   _["green"] = colourvalues::palette::puor_green,
   _["blue"] = colourvalues::palette::puor_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_prgn() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::prgn_red,
   _["green"] = colourvalues::palette::prgn_green,
   _["blue"] = colourvalues::palette::prgn_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_piyg() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::piyg_red,
   _["green"] = colourvalues::palette::piyg_green,
   _["blue"] = colourvalues::palette::piyg_blue
);
}
// [[Rcpp::export]]
  Rcpp::DataFrame rcpp_brbg() {
    return Rcpp::DataFrame::create(
   _["red"] = colourvalues::palette::brbg_red,
   _["green"] = colourvalues::palette::brbg_green,
   _["blue"] = colourvalues::palette::brbg_blue
);
}
