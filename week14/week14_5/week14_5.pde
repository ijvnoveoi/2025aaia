//week14_5_sound
import processing.sound.*;
SoundFile music;
void setup(){
  size(640, 360);
  music = new SoundFile(this, "In Game Music.mp3");
  music.play();
}
void draw(){
  
}
