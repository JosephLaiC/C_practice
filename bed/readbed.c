#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


struct BEDRecord {
    std::string chrom; // 染色體名稱
    int start;         // 起始位置
    int end;           // 結束位置
    std::string name;  // 記錄名稱 (可選)
    float score;       // 記錄分數 (可選)
    char strand;       // 正負鏈 (可選)
};


std::vector<BEDRecord> readBEDFile(const std::string& filename) {
    std::vector<BEDRecord> records;
    std::ifstream infile(filename);
    if (!infile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return records;
    }

    std::string line;
    while (std::getline(infile, line)) {
        std::istringstream iss(line);
        BEDRecord record;
        iss >> record.chrom >> record.start >> record.end;

        if (iss.peek() != EOF) {
            iss >> record.name;
        }
        if (iss.peek() != EOF) {
            iss >> record.score;
        }
        if (iss.peek() != EOF) {
            iss >> record.strand;
        }
        records.push_back(record);
    }
    infile.close();
    return records;
}

void printBEDRecords(const std::vector<BEDRecord>& records) {
    for (const auto& record : records) {
        std::cout << "Chromosome: " << record.chrom
                  << ", Start: " << record.start
                  << ", End: " << record.end;
        if (!record.name.empty()) {
            std::cout << ", Name: " << record.name;
        }
        if (record.score != 0.0) {
            std::cout << ", Score: " << record.score;
        }
        if (record.strand != '\0') {
            std::cout << ", Strand: " << record.strand;
        }
        std::cout << std::endl;
    }
}

int main() {
    std::string filename = "test.bed";
    std::vector<BEDRecord> records = readBEDFile(filename);
    printBEDRecords(records);
    return 0;
}



