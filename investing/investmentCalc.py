#!/usr/bin/env python3

import sys
import csv
import datetime


class stock:
    # dai: dollar amount invested, pps: price per share
    def __init__(self):
        self.ticker = input("enter ticker symbol: ")
        self.dai = input("enter dollar amount invested: ")
        self.pps = input("enter price per share: ")




def appendFile(usr):
    fileName = usr + 'InvestmentStatus.csv'
    currentDate = datetime.datetime.now()

    print("enter amount")
    stockVal = input()
    rowArray = [stockVal,currentDate.year,currentDate.strftime('%m'),currentDate.strftime('%d')]

    with open(fileName, '+a', newline = '') as csvfile:
        csvWriter = csv.writer(csvfile)

        csvWriter.writerow(rowArray)



def appendStockFile(usr):
    fileName = usr + 'Portfolio.csv'

    currentDate = datetime.datetime.now()

    newStock = stock()
    stockArray = [newStock.ticker, newStock.dai, newStock.pps, currentDate.year, currentDate.strftime('%m'), currentDate.strftime('%d')]

    with open(fileName, '+a', newline = '') as csvfile:
        csvWriter = csv.writer(csvfile)

        csvWriter.writerow(stockArray)
        csvfile.close()
    
    yesNo = input("enter another?[y,n]: ")
    if yesNo == 'y':
        appendStockFile(usr)



if __name__ == "__main__":
    
    if len(sys.argv) != 2:
        print("please enter username")
        usr = input()
    else:
        print("opening ", sys.argv[1], "'s account\n")
        usr = sys.argv[1]



    print('choose option: enter current value[1], enter new data[2], read table[3]')
    val = input()

    if val == '1':
        appendFile(usr)
    if val == '2':
        appendStockFile(usr)
