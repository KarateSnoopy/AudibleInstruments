#include "AudibleInstruments.hpp"


Plugin *plugin;

void init(rack::Plugin *p) {
	plugin = p;
	p->slug = "AudibleInstruments";
#ifdef VERSION
	p->version = TOSTRING(VERSION);
#endif

	p->addModel(createModel<BraidsWidget>("Audible Instruments", "Braids", "Macro Oscillator (Braids)", OSCILLATOR_TAG, WAVESHAPER_TAG));
	p->addModel(createModel<ElementsWidget>("Audible Instruments", "Elements", "Modal Synthesizer (Elements)", REVERB_TAG));
	p->addModel(createModel<TidesWidget>("Audible Instruments", "Tides", "Tidal Modulator (Tides)", LFO_TAG, OSCILLATOR_TAG, WAVESHAPER_TAG, FUNCTION_GENERATOR_TAG));
	p->addModel(createModel<CloudsWidget>("Audible Instruments", "Clouds", "Texture Synthesizer (Clouds)", GRANULAR_TAG, REVERB_TAG));
	p->addModel(createModel<WarpsWidget>("Audible Instruments", "Warps", "Meta Modulator (Warps)", RING_MODULATOR_TAG, WAVESHAPER_TAG));
	p->addModel(createModel<RingsWidget>("Audible Instruments", "Rings", "Resonator (Rings)"));
	p->addModel(createModel<LinksWidget>("Audible Instruments", "Links", "Multiples (Links)", MULTIPLE_TAG, MIXER_TAG));
	p->addModel(createModel<KinksWidget>("Audible Instruments", "Kinks", "Utilities (Kinks)", UTILITY_TAG));
	p->addModel(createModel<ShadesWidget>("Audible Instruments", "Shades", "Mixer (Shades)", MIXER_TAG));
	p->addModel(createModel<BranchesWidget>("Audible Instruments", "Branches", "Bernoulli Gate (Branches)", RANDOM_TAG, DUAL_TAG));
	p->addModel(createModel<BlindsWidget>("Audible Instruments", "Blinds", "Quad VC-polarizer (Blinds)", MIXER_TAG, ATTENUATOR_TAG));
	p->addModel(createModel<VeilsWidget>("Audible Instruments", "Veils", "Quad VCA (Veils)", MIXER_TAG));
	p->addModel(createModel<FramesWidget>("Audible Instruments", "Frames", "Keyframer/Mixer (Frames)", MIXER_TAG, ATTENUATOR_TAG, LFO_TAG));
}
