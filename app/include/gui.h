#ifndef INCLUDE_GUI_H_
#define INCLUDE_GUI_H_

#include "common.h"
#include "datetime.h"

void drawCurrentWeather(CurWeather *curWeather);
void drawCurrentWeatherSmall(CurWeather *curWeather);

void drawHourlyForecastChart(Forecast *forecast, int count);
void drawDailyForecastChart(Forecast *forecast, int count);
void drawForecast(Forecast *forecast, int count, struct tm *curTime);

void drawIndoorTemp(const char *temp);
void drawIndoorTempSmall(const char *temp);

void drawMetaInfo(struct tm *curTime, uint fails, uint updates, uint attempts);

void printTime(struct tm *tm, char *str);
void epochToWeekday(uint epoch, char *weekday);
void decodeWeekday(int tm_wday, char *weekday);
const uint* iconIdToImage(IconId id, int size);

#endif /* INCLUDE_GUI_H_ */
