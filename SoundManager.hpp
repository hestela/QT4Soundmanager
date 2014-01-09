#ifndef SOUNDMANAGER_H
#define SOUNDMANAGER_H

#include <phonon/AudioOutput>
#include <phonon/MediaObject>
#include <phonon/MediaSource>
#include <phonon/VideoWidget>
#include <phonon/VideoPlayer>
#include <QSound>

class SoundManager : public QObject
{
	Q_OBJECT

	public:
		SoundManager();
		void emitPlayBgm(int bgmNum);
		void emitPlayEffect(int effectNum);

	signals:
		void playBgm(int bgmNum);
		void playEffect(int effectNum);

	protected slots:
		void finished();
		void playBgmWorker(int bgmNum);
		void playEffectWorker(int effectNum); 

	private:
		Phonon::MediaObject *bgmObject;
		Phonon::AudioOutput *bgmOutput;
		QList<Phonon::MediaSource> sources;
		QList<Phonon::MediaSource> bgmSources;
		QList<Phonon::AudioOutput*> audioOutputs;
		QList<Phonon::MediaObject*> mediaObjects;
};

#endif 