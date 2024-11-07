from datetime import date, datetime


def get_latest_rate(data: list):
    min_diff = 123412351223422
    current_date = date.today()
    current_rate = 0
    
    for d in data:
        current_diff = (datetime.strptime(d['date'], "%Y-%m-%d").date() - current_date).total_seconds()
        if datetime.strptime(d['date'], "%Y-%m-%d").date() <= current_date and current_diff <= min_diff:
            current_rate = d['rate']
            min_diff = current_diff

    return current_rate


if __name__ == "__main__":
    data = [
        {
        'date': "2023-06-23",
        'rate': 2.1
        },
        {
        'date': "2023-03-30",
        'rate': 4.8
        },
        {
        'date': "2023-04-01",
        'rate': 5.8
        }
    ]

    print(get_latest_rate(data))
