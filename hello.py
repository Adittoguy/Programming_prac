import pandas as pd
import zipfile

with zipfile.ZipFile("C:/Users/adity/Downloads/archive.zip", "r") as zip_ref:
    zip_ref.extractall("quotes_data")

df = pd.read_csv("C:/Users/adity/Downloads/AnimeQuotes.csv")
print(df.head())
