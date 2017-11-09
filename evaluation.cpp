#include "evaluation.h"
void Evaluation::setLaMatiere(Matiere* laMatiere)
{
  pLaMatiere=laMatiere;
}
void Evaluation::addNote(Note simonne)
{
	vectNote.push_back(simonne);
}
string Evaluation::getNomEvaluation()
{
	return evaluationNom;
}
void Evaluation::setNomEvaluation(string leNomEvaluation)
{
	evaluationNom=leNomEvaluation;	
}
string Evaluation::getDateEvaluation()
{
	return evaluationDate;
}
void Evaluation::setDateEvaluation(string laDateDeEvaluation)
{
	evaluationDate = laDateDeEvaluation;
}
int Evaluation::getSemestre()
{
	return semestre;
}
void Evaluation::setSemestre(int leSemestre)
{
	semestre=leSemestre;
}
