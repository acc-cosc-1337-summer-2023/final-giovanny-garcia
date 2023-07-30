//
#ifndef COMEOUTPHASE
#define COMEOUTPHASE

class ComeOutPhase : public Phase {
public:
    RollOutcome get_outcome(const Roll& roll) const override;
};
#endif