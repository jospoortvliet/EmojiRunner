#include <utility>

#ifndef EMOJIRUNNER_EMOJICATEGORY_H
#define EMOJIRUNNER_EMOJICATEGORY_H

#include <QtCore/QString>
#include <QtCore/QMap>
#include "Emoji.h"

class EmojiCategory {
public:
    QString name;
    QMap<QString, Emoji> emojis;
    bool enabled = true;

    EmojiCategory() = default;

    explicit EmojiCategory(QString name) : name(std::move(name)) {}
};


#endif //EMOJIRUNNER_EMOJICATEGORY_H
