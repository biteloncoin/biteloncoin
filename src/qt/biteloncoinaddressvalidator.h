// Copyright (c) 2011-2020 The BitElonCoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITELONCOIN_QT_BITELONCOINADDRESSVALIDATOR_H
#define BITELONCOIN_QT_BITELONCOINADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class BitcoinAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

/** BitElonCoin address widget validator, checks for a valid biteloncoin address.
 */
class BitcoinAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit BitcoinAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const override;
};

#endif // BITELONCOIN_QT_BITELONCOINADDRESSVALIDATOR_H
