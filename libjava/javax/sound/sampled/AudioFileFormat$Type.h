
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_sound_sampled_AudioFileFormat$Type__
#define __javax_sound_sampled_AudioFileFormat$Type__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace javax
  {
    namespace sound
    {
      namespace sampled
      {
          class AudioFileFormat$Type;
      }
    }
  }
}

class javax::sound::sampled::AudioFileFormat$Type : public ::java::lang::Object
{

public:
  AudioFileFormat$Type(::java::lang::String *, ::java::lang::String *);
  virtual jboolean equals(::java::lang::Object *);
  virtual jint hashCode();
  virtual ::java::lang::String * getExtension();
  virtual ::java::lang::String * toString();
  static ::javax::sound::sampled::AudioFileFormat$Type * AIFC;
  static ::javax::sound::sampled::AudioFileFormat$Type * AIFF;
  static ::javax::sound::sampled::AudioFileFormat$Type * AU;
  static ::javax::sound::sampled::AudioFileFormat$Type * SND;
  static ::javax::sound::sampled::AudioFileFormat$Type * WAVE;
private:
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) name;
  ::java::lang::String * extension;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_sound_sampled_AudioFileFormat$Type__