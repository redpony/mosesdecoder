#ifndef moses_TargetBigramFeature_h
#define moses_TargetBigramFeature_h

#include "FeatureFunction.h"
#include "FFState.h"
#include <string>
#include <set>

namespace Moses
{

/** Sets the features of observed bigrams.
 */
class TargetBigramFeature : public StatefulFeatureFunction {
public:
	TargetBigramFeature(ScoreIndexManager &scoreIndexManager);

	bool Load(const std::string &filePath);

	size_t GetNumScoreComponents() const;
	std::string GetScoreProducerDescription() const;
	std::string GetScoreProducerWeightShortName() const;
	size_t GetNumInputScores() const;

	virtual const FFState* EmptyHypothesisState(const InputType &input) const;

	virtual FFState* Evaluate(const Hypothesis& cur_hypo, const FFState* prev_state,
	                          ScoreComponentCollection* accumulator) const;
private:
	std::set<std::string> m_wordSet;
};

}

#endif // moses_TargetBigramFeature_h